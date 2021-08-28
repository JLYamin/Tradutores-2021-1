%option noinput nounput
%option noyywrap

%{
  #include <stdio.h>
  #include <stdlib.h>

  extern int yylex();
%}

TRUE    (true)
FALSE   (false)
OR      (or)
AND     (and)
NOT     (not)
OPEN_P  "("
CLOSE_P ")"

%%

{TRUE} {
  yylval = yytext;
  return TRUE;
}

{FALSE} {
  yylval = yytext;
  return FALSE;
}

{OR} {
  yylval = yytext;
  return OR;
}

{AND} {
  yylval = yytext;
  return AND;
}

{NOT} {
  yylval = yytext;
  return FALSE;
}

{OPEN_P} {
  yylval = yytext;
  return OPEN_P;
}

{CLOSE_P} {
  yylval = yytext;
  return CLOSE_P;
}

[ \n\t]* {}

%%