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

%%

%%

int main () {
  printf("line \t column\n");
  printf("%2d \t %3d \t", current_line, current_column);
  printf(PRINT_CYAN "a\n" PRINT_RESET);
  printf("%2d \t %3d \t", current_line + 2232, current_column);
  printf(PRINT_CYAN "b\n" PRINT_RESET);
  printf("%2d \t %3d \t", current_line + 4, current_column + 356);
  printf(PRINT_CYAN "c\n" PRINT_RESET);
  printf("%2d \t %3d \t", current_line+ 1, current_column);
  printf(PRINT_CYAN "d\n" PRINT_RESET);
  return 0;
}