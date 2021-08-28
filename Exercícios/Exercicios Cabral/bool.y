%{
  #include <stdio.h>
  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;
  void yyerror(char *s);
%}

%union{
      char* bool_op;
      char  par;
      int id;
}
%start bexpr
%token <char *> BOOL
%token <char *> AND
%token <char *> OR
%token <char *> NOT
%token <char> PAR
%token <char *> TERM      
%type <id> bexpr
%type <id> bterm
%type <id> bfactor

%%
bexpr: bexpr OR bterm { $$ = $1 || $3; }
      | bterm {}

bterm: bterm AND bfactor { $$ = $1 && $3; } 
      | bfactor {}

bfactor: NOT bfactor { $$ = !$2; } 
          | '(' bexpr ')'   {}
          | BOOL "true"  { $$ = 1; }
          | BOOL "false" { $$ = 0; }
%%


void yyerror (char *s)
{
  fprintf (stderr, "%s\n", s);
}  