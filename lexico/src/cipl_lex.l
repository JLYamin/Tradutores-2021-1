%option noyywrap

%{
  #include <stdio.h>
  #include <stdlib.h>

  #define PRINT_CYAN  "\x1b[36m"
  #define PRINT_RED   "\x1b[31m"
  #define PRINT_RESET "\x1b[0m"
  
  int current_line = 1;
  int current_column = 1;
%}

WSPACE  [ \t]+
NLINE   \n
DIGIT   [0-9]
ID      [_a-zA-Z][_a-zA-Z0-9]*

%%

{WSPACE} {
  current_column += yyleng;
}

{NLINE} {
  current_column = 1;
  current_line++;
}

(-)?{DIGIT}*\.{DIGIT}+ {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Float: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

(-)?{DIGIT}+ {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Int: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{ID} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Identifier: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}



%%

int main (int argc, char *argv[]) {
  if (argc > 1) {
    FILE *file = fopen(argv[1], "r");

    if (file) {
      yyin = file;
      printf("Line \t Column\n");
      yylex();
    } else {
      printf("Invalid filename and/or path.\n");
    }
  } else {
    printf("There isn't input files.\n");
  }

  yylex_destroy();
  return 0;
}