%define lr.type canonical-lr;

%{
  #include "./lib/tree.h"
  #include "./lib/symbol.h"

  extern FILE *yyin;

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *message);

  extern int current_line;
  extern int current_column;
%}

%union{
  tokenElem token;
  treeNode node;
}

%token <token> ID;
%token <token> INT;
%token <token> FLOAT;
%token <token> OP_PLUS;
%token <token> OP_MINUS;
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
  declarationList {}

declarationList:
  declarationList declaration {}
  | declaration               {}

declaration:
  variableDeclaration {}
  | functionDeclaration {}

variableDeclaration:
  TYPE ID SEMICOLON {}

functionDeclaration:
  TYPE ID OPEN_PAREN params CLOSE_PAREN compoundStmt  {}

params:
  paramList {}
  | %empty  {}

paramList:
  paramList COMMA param {}
  | param {}

param:
  TYPE ID {}

compoundStmt:
  OPEN_CURLY statementList CLOSE_CURLY  {}

statementList:
  statementList statement {}
  | %empty  {}

statement:
  expressionStmt          {}
  | compoundStmt          {}
  | conditionalStmt       {}
  | loopStmt              {}
  | returnStmt            {}
  | variableDeclaration   {}
  | inOutStmt             {}

expressionStmt:
  expression SEMICOLON    {}
  | SEMICOLON             {}

conditionalStmt:
  IF OPEN_PAREN expression CLOSE_PAREN statement ELSE statement {}
  | IF OPEN_PAREN expression CLOSE_PAREN statement              {}

loopStmt:
  FOR OPEN_PAREN expression SEMICOLON logicExpression SEMICOLON expression CLOSE_PAREN statement {}

returnStmt:
  RETURN expression SEMICOLON {}

inOutStmt:
  INPUT OPEN_PAREN ID CLOSE_PAREN SEMICOLON {}
  | OUTPUT OPEN_PAREN outputArgs CLOSE_PAREN SEMICOLON  {printf("%s %s %s\n", $1.content, $2.content, $4.content);}

expression:
  ID OP_ASSIG expression  {}
  | logicExpression       {}

logicExpression:
  logicExpression OP_LOGIC relatExpression  {}
  | relatExpression                         {}

relatExpression:
  relatExpression OP_RELAT listExpression   {}
  | listExpression                          {}

listExpression:
  addExpression OP_LIST listExpression      {}
  | addExpression                           {}

addExpression:
  addExpression opAdd mulExpression         {}
  | mulExpression                           {}

mulExpression:
  mulExpression OP_MUL factor               {}
  | factor                                  {}

opAdd:
  OP_PLUS                                   {}
  | OP_MINUS                                {}

factor:
  OPEN_PAREN expression CLOSE_PAREN         {}
  | unaryExpression                         {}
  | call                                    {}
  | ID                                      {printf("%s\n", $1.content);}
  | FLOAT                                   {}
  | INT                                     {}
  | NIL                                     {}

unaryExpression:  
  UN_OP factor                              {}
  | OP_MINUS factor               {}

call:
  ID OPEN_PAREN args CLOSE_PAREN            {}

outputArgs:
  factor                           {}
  | STRING                                  {printf("%s\n", $1.content);}

args:
  argList                                   {}
  | %empty                                  {}

argList:
  argList COMMA expression                  {}
  | expression                              {}

%%

void yyerror (char const *message) {
  fprintf(stderr, "%3d \t %4d \t %s\n", current_line, current_column, message);
}

int main (int argc, char *argv[]) {
if (argc > 1) {
    FILE *file = fopen(argv[1], "r");

    if (file) {
      yyin = file;

      yyparse();
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