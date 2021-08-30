%define lr.type canonical-lr;

%{
  #include <stdio.h>
  #include "./lib/token.h"
  #include "./lib/tree.h"
  #include "./lib/symbol.h"

  extern FILE *yyin;

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *message);
%}

%union{
  struct Token* token;
  struct TreeNode* node;
}

%token <token> ID;

%type <node> program;
%type <node> declarationList;
%type <node> declaration;
%type <node> variableDeclaration;
%type <node> functionDeclaration;
%type <node> params;
%type <node> paramsList;
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

%%

program: declarationList

%%

void yyerror (char const *message) {
  fprintf(stderr, "%s\n", message);
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