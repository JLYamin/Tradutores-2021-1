%define lr.type canonical-lr;
%define parse.error detailed;

%{
  #include "./lib/tree.h"
  #include "./lib/symbol.h"

  extern FILE *yyin;

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *message);

  extern int currentLine;
  extern int currentColumn;
  extern int scopeCounting;
  extern int totalErrors;

  tableNode* table;
  treeNode* root;
%}

%union{
  tokenElem token;
  treeNode* node;
}

%token <token> ID;
%token <token> INT;
%token <token> FLOAT;
%token <token> OP_ADD;
%token <token> OP_MUL;
%token <token> OP_LOGIC;
%token <token> OP_RELAT;
%token <token> OP_ASSIG;
%token <token> OP_LIST;
%token <token> UN_OP;
%token <token> TYPE;
%token <token> NIL;
%token <token> IF;
%token <token> ELSE;
%token <token> FOR;
%token <token> RETURN;
%token <token> INPUT;
%token <token> OUTPUT;
%token <token> SEMICOLON;
%token <token> COMMA;
%token <token> OPEN_CURLY;
%token <token> OPEN_PAREN;
%token <token> CLOSE_CURLY;
%token <token> CLOSE_PAREN;
%token <token> STRING;

%type <node> program;
%type <node> declarationList;
%type <node> declaration;
%type <node> variableDeclaration;
%type <node> functionDeclaration;
%type <node> params;
%type <node> paramList;
%type <node> param;
%type <node> compoundStmt;
%type <node> statementList;
%type <node> statement;
%type <node> expressionStmt;
%type <node> conditionalStmt;
%type <node> loopStmt;
%type <node> returnStmt;
%type <node> inOutStmt;
%type <node> expression;
%type <node> logicExpression;
%type <node> relatExpression;
%type <node> listExpression;
%type <node> addExpression;
%type <node> mulExpression;
%type <node> factor;
%type <node> unaryExpression;
%type <node> call;
%type <node> outputArgs;
%type <node> args;
%type <node> argList;

%start program

%precedence CLOSE_PAREN
%precedence ELSE

%%

program:
  declarationList {
    $$ = $1;
    root = $$;
  }

declarationList:
  declarationList declaration {
    $$ = createNode("declarationList");
    $$->children[0] = $1;
    $$->children[1] = $2;
  }
  | declaration               { $$ = $1; }

declaration:
  variableDeclaration { $$ = $1; }
  | functionDeclaration { $$ = $1; }

variableDeclaration:
  TYPE ID SEMICOLON {
    $$ = createNode("variableDeclaration");
    $$->children[0] = addLeaf($1);
    $$->children[1] = addLeaf($2);
    newSymbol($2.content, $1.content, 0, scopeCounting, table);
  }
  | error ';' {yyerrok;}


functionDeclaration:
  TYPE ID OPEN_PAREN params CLOSE_PAREN compoundStmt  {
    $$ = createNode("functionDeclaration");
    $$->children[0] = addLeaf($1);
    $$->children[1] = addLeaf($2);
    $$->children[2] = addLeaf($3);
    $$->children[3] = $4;
    $$->children[4] = addLeaf($5);
    $$->children[5] = $6;
    newSymbol($2.content,  $1.content, 1, scopeCounting, table);
  }
  | error {yyerrok;}

params:
  paramList { $$ = $1; }
  | %empty  { }

paramList:
  paramList COMMA param {
    $$ = createNode("paramList");
    $$->children[0] = $1;
    $$->children[1] = $3;
  }
  | param { $$ = $1; }

param:
  TYPE ID {
    $$ = createNode("param");
    $$->children[0] = addLeaf($1);
    $$->children[1] = addLeaf($2);
  }

compoundStmt:
  OPEN_CURLY statementList CLOSE_CURLY  {
    $$ = createNode("compoundStmt");
    $$->children[0] = addLeaf($1);
    $$->children[1] = $2;
    $$->children[2] = addLeaf($3);
  }
  | error {yyerrok;}

statementList:
  statementList statement {
    $$ = createNode("statementList");
    $$->children[0] = $1;
    $$->children[1] = $2;
  }
  | %empty  {}

statement:
  expressionStmt          { $$ = $1; }
  | compoundStmt          { $$ = $1; }
  | conditionalStmt       { $$ = $1; }
  | loopStmt              { $$ = $1; }
  | returnStmt            { $$ = $1; }
  | variableDeclaration   { $$ = $1; }
  | inOutStmt             { $$ = $1; }

expressionStmt:
  expression SEMICOLON    { $$ = $1; }
  | SEMICOLON             { $$ = addLeaf($1); }

conditionalStmt:
  IF OPEN_PAREN expression CLOSE_PAREN statement ELSE statement {
    $$ = createNode("conditionalStmt");
    $$->children[0] = addLeaf($1);
    $$->children[1] = addLeaf($2);
    $$->children[2] = $3;
    $$->children[3] = addLeaf($4);
    $$->children[4] = $5;
    $$->children[5] = addLeaf($6);
    $$->children[6] = $7;
  }
  | IF OPEN_PAREN expression CLOSE_PAREN statement {
    $$ = createNode("conditionalStmt");
    $$->children[0] = addLeaf($1);
    $$->children[1] = addLeaf($2);
    $$->children[2] = $3;
    $$->children[3] = addLeaf($4);
    $$->children[4] = $5;
  }
  | IF error CLOSE_PAREN {yyerrok;}

loopStmt:
  FOR OPEN_PAREN expression SEMICOLON logicExpression SEMICOLON expression CLOSE_PAREN statement {
    $$ = createNode("loopStmt");
    $$->children[0] = addLeaf($1);
    $$->children[1] = addLeaf($2);
    $$->children[2] = $3;
    $$->children[3] = $5;
    $$->children[4] = $7;
    $$->children[5] = addLeaf($8);
    $$->children[6] = $9;
  }

returnStmt:
  RETURN expression SEMICOLON {
    $$ = createNode("returnStmt");
    $$->children[0] = addLeaf($1);
    $$->children[1] = $2;
  }

inOutStmt:
  INPUT OPEN_PAREN ID CLOSE_PAREN SEMICOLON {
    $$ = createNode("inStmt");
    $$->children[0] = addLeaf($1);
    $$->children[1] = addLeaf($2);
    $$->children[2] = addLeaf($3);
    $$->children[3] = addLeaf($4);
  }
  | OUTPUT OPEN_PAREN outputArgs CLOSE_PAREN SEMICOLON  {
    $$ = createNode("outStmt");
    $$->children[0] = addLeaf($1);
    $$->children[1] = addLeaf($2);
    $$->children[2] = $3;
    $$->children[3] = addLeaf($4);
  }
  | INPUT error SEMICOLON {yyerrok;}
  | OUTPUT error SEMICOLON {yyerrok;}

expression:
  ID OP_ASSIG expression  {
    $$ = createNode("expression");
    $$->children[0] = addLeaf($1);
    $$->children[1] = addLeaf($2);
    $$->children[2] = $3;
  }
  | logicExpression { $$ = $1; }

logicExpression:
  logicExpression OP_LOGIC relatExpression  {
    $$ = createNode("logicExpression");
    $$->children[0] = $1;
    $$->children[1] = addLeaf($2);
    $$->children[2] = $3;
  }
  | relatExpression { $$ = $1; }

relatExpression:
  relatExpression OP_RELAT listExpression   {
    $$ = createNode("relatExpression");
    $$->children[0] = $1;
    $$->children[1] = addLeaf($2);
    $$->children[2] = $3;
  }
  | listExpression  { $$ = $1; }

listExpression:
  addExpression OP_LIST listExpression      {
    $$ = createNode("listExpression");
    $$->children[0] = $1;
    $$->children[1] = addLeaf($2);
    $$->children[2] = $3;
  }
  | addExpression   { $$ = $1; }

addExpression:
  addExpression OP_ADD mulExpression {
    $$ = createNode("addExpression");
    $$->children[0] = $1;
    $$->children[1] = addLeaf($2);
    $$->children[2] = $3;
  }
  | mulExpression   { $$ = $1; }

mulExpression:
  mulExpression OP_MUL factor {
    $$ = createNode("mulExpression");
    $$->children[0] = $1;
    $$->children[1] = addLeaf($2);
    $$->children[2] = $3;
  }
  | factor { $$ = $1; }

factor:
  OPEN_PAREN expression CLOSE_PAREN {
    $$ = createNode("factor");
    $$->children[0] = addLeaf($1);
    $$->children[1] = $2;
    $$->children[2] = addLeaf($3);
  }
  | unaryExpression { $$ = $1; }
  | call { $$ = $1; }
  | ID {
    $$ = addLeaf($1);
  }
  | FLOAT {
    $$ = addLeaf($1);
  }
  | INT {
    $$ = addLeaf($1);
  }
  | NIL {
    $$ = addLeaf($1);
  }

unaryExpression:  
  UN_OP factor {
    $$ = createNode("unaryExpression");
    $$->children[0] = addLeaf($1);
    $$->children[1] = $2;
  }
  | OP_ADD factor {
    $$ = createNode("unaryExpression");
    $$->children[0] = addLeaf($1);
    $$->children[1] = $2;
  }

call:
  ID OPEN_PAREN args CLOSE_PAREN {
    $$ = createNode("call");
    $$->children[0] = addLeaf($1);
    $$->children[1] = addLeaf($2);
    $$->children[2] = $3;
    $$->children[3] = addLeaf($4);
  }

outputArgs:
  factor { $$ = $1; }
  | STRING {
    $$ = addLeaf($1);
  }

args:
  argList { $$ = $1; }
  | %empty  {}

argList:
  argList COMMA expression {
    $$ = createNode("argList");
    $$->children[0] = $1;
    $$->children[1] = $3;
  }
  | expression { $$ = $1; }

%%

void yyerror (char const *message) {
  printf("%3d \t %4d \t " PRINT_RED "Syntactic Error: %s \n" PRINT_RESET, currentLine, currentColumn, message);
  totalErrors++;
}

int main (int argc, char *argv[]) {
if (argc > 1) {
    FILE *file = fopen(argv[1], "r");

    if (file) {
      yyin = file;

      printf("\nErrors detected:\n");
      printf("Line \t Column\t Error\n");
      table = initTable(scopeCounting);

      yyparse();
      if (totalErrors == 0) {
        printf(PRINT_CYAN "There's no errors.\n" PRINT_RESET);
      }
      printf("\nAbstract Syntax Tree:\n");
      printTree(root, 0);

      printTable(table);
      freeTable(table);
    } else {
      printf("Invalid filename and/or path.\n");
    }

    fclose(file);
  } else {
    printf("There isn't input files.\n");
  }

  yylex_destroy();

  return 0;
}