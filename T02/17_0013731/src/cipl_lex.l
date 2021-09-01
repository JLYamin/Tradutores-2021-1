%option noyywrap
%option noinput nounput

%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "./lib/tree.h"
  #include "./lib/token.h"
  #include "./lib/symbol.h"
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
  current_column += yyleng;
}

{STRING} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return STRING;
}

{FLOAT} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return FLOAT;
}

{INT} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return INT;
}

{OP_PLUS} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return OP_PLUS;
}

{OP_MINUS} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return OP_MINUS;
}

{OP_MUL} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return OP_MUL;
}

{OP_LOGIC} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return OP_LOGIC;
}

{OP_RELAT} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return OP_RELAT;
}

{OP_ASSIG} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return OP_ASSIG;
}

{OP_LIST} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return OP_LIST;
}

{UN_OP} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return UN_OP;
}

{TYPE} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return TYPE;
}

{NIL} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return NIL;
}

{IF} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return IF;
}

{ELSE} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return ELSE;
}

{FOR} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return FOR;
}

{RETURN} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return RETURN;
}

{INPUT} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return INPUT;
}

{OUTPUT} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return OUTPUT;
}

{ID} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return ID;
}

{SEMICOLON} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return SEMICOLON;
}

{COMMA} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return COMMA;
}

{OPEN_CURLY} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return OPEN_CURLY;
}

{CLOSE_CURLY} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return CLOSE_CURLY;
}

{OPEN_PAREN} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return OPEN_PAREN;
}

{CLOSE_PAREN} {
  yylval.token.line = current_line;
  yylval.token.column = current_column;
  strcpy(yylval.token.content, yytext);
  current_column += yyleng;
  return CLOSE_PAREN;
}

. {
  printf(PRINT_RED "%3d \t %4d \t ", current_line, current_column);
  printf("Lexical Error: %s\n" PRINT_RESET, yytext);
  current_column += yyleng;
}

%%