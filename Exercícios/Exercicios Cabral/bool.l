%option noyywrap
%option noinput nounput

%{
  #include <stdio.h>
  #include "bool.tab.h"
  extern int yylex();
%}

BOOL true|false

BFACTOR [a-zA-Z0-9]+


%%

and {
  yylval.bool_op = yytext;
  return AND;
}

or {
  yylval.bool_op = yytext;
  return OR;
}

not {
  yylval.bool_op = yytext;
  return NOT;
}

{BOOL} {
  yylval.bool_op = yytext;
  return BOOL;
}

{BFACTOR} {
  yylval.id  = (int) atoi(yytext);
  return TERM;
}

"("|")"  {
  yylval.par = yytext[0];
  return PAR;
}


[ \n\t]* {}

. {}

%%


int main(int argc, char **argv) {
  FILE *fp;
  int flag = 0;
  
  if(argc > 1){
    flag = 1;
    fp = fopen(argv[1], "r");
    yyin = fp;
  }else {
    yyin = stdin;
  }
  yylex();
  printf("\n");
  if(flag){
    fclose(fp);
  }
  yylex_destroy();
  return 0;
}