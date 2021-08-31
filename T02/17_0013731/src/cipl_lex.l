%option noyywrap
%option noinput nounput

%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "cipl_sin.tab.h"

  #define PRINT_CYAN  "\x1b[36m"
  #define PRINT_RED   "\x1b[31m"
  #define PRINT_RESET "\x1b[0m"
  
  int current_line = 1;
  int current_column = 1;
%}

WSPACE      [ \t]+
NLINE       [\n\r]

SLCOMMENT   (\/\/).+

ID          [_a-zA-Z][_a-zA-Z0-9]*
DIGIT       [0-9]
FLOAT       {DIGIT}*\.{DIGIT}+
INT         {DIGIT}+

OP_PLUS     "+"
OP_MINUS    "-"
OP_MUL      [*/]
OP_LOGIC    (&&)|(\|\|)
OP_RELAT    (<)|(<=)|(>)|(>=)|(==)|(!=)
OP_ASSIG    (=)
OP_LIST     (>>)|(<<)|(:)

UN_OP       (\?)|(!)|(%)

TYPE        (int)|(float)|"int list"|"float list"

NIL         (NIL)
IF          (if)
ELSE        (else)
FOR         (for)
RETURN      (return)
INPUT       (read)
OUTPUT      (write)|(writeln)

SEMICOLON   (;)
COMMA       (,)
OPEN_CURLY  "{"
OPEN_PAREN  "("
CLOSE_CURLY "}"
CLOSE_PAREN ")"
STRING      (\".*\")|(\'.*\')

%%

{WSPACE} {
  current_column += yyleng;
}

{NLINE} {
  current_column = 1;
  current_line++;
}

{SLCOMMENT} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Single line comment found\n");
  current_column += yyleng;
}

{STRING} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("String: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{FLOAT} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Float: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{INT} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Int: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{OP_PLUS} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Plus Operator: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{OP_MINUS} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Minus Operator: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{OP_MUL} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Multiplicative Operator: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{OP_LOGIC} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Logic Operator: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{OP_RELAT} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Relational Operator: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{OP_ASSIG} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Assignment: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{OP_LIST} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("List Operator: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{UN_OP} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Unary Operator: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{TYPE} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Type: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{NIL} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("NIL const: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{IF} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("If: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{ELSE} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Else: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{FOR} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("For: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{RETURN} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Return: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{INPUT} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Input: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{OUTPUT} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Output: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{ID} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Identifier: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{SEMICOLON} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Semicolon: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{COMMA} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Comma: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{OPEN_CURLY} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Open curly bracket: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{CLOSE_CURLY} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Close curly bracket: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{OPEN_PAREN} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Open parenthesis: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

{CLOSE_PAREN} {
  printf("%3d \t %4d \t ", current_line, current_column);
  printf("Close parenthesis: " PRINT_CYAN "%s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

. {
  printf(PRINT_RED "%3d \t %4d \t ", current_line, current_column);
  printf("Lexical Error: %s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}