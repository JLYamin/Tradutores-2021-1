%{
  #include <stdio.h>

  extern int yyparse();
  extern int yylex();
  extern int yylex_destroy();
  extern void yyerror(const char* a);
  extern FILE *yyin;
}

%token <char *> TRUE
%token <char *> FALSE
%token <char *> AND
%token <char *> NOT
%token <char *> OR
%token <char> OPEN_P
%token <char> CLOSE_P

%%

bexpr: bexpr OR bterm {}
      | bterm {}

bterm: bterm AND bfacotr {}
      | bfactor {}

bfactor: NOT bfactor {}
        | OPEN_P bexpr CLOSE_P {}
        | TRUE {}
        | FALSE {}

%%

