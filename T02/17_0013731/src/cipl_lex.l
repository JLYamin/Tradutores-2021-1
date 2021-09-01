%option noyywrap
%option noinput nounput

%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "./lib/tree.h"
  #include "./lib/token.h"
  #include "./lib/symbol.h"
  #include "cipl_syn.tab.h"

  #define PRINT_CYAN  "\x1b[36m"
  #define PRINT_RED   "\x1b[31m"
  #define PRINT_RESET "\x1b[0m"
  
  int currentLine = 1;
  int currentColumn = 1;
  int totalErrors = 0;
  int scopeCounting = 0;
%}

WSPACE      [ \t]+
NLINE       [\n\r]

SLCOMMENT   (\/\/).+

ID          [_a-zA-Z][_a-zA-Z0-9]*
DIGIT       [0-9]
FLOAT       {DIGIT}*\.{DIGIT}+
INT         {DIGIT}+

OP_ADD     [+-]
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
  currentColumn += yyleng;
}

{NLINE} {
  currentColumn = 1;
  currentLine++;
}

{SLCOMMENT} {
  currentColumn += yyleng;
}

{STRING} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return STRING;
}

{FLOAT} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return FLOAT;
}

{INT} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return INT;
}

{OP_ADD} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return OP_ADD;
}

{OP_MUL} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return OP_MUL;
}

{OP_LOGIC} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return OP_LOGIC;
}

{OP_RELAT} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return OP_RELAT;
}

{OP_ASSIG} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return OP_ASSIG;
}

{OP_LIST} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return OP_LIST;
}

{UN_OP} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return UN_OP;
}

{TYPE} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return TYPE;
}

{NIL} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return NIL;
}

{IF} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return IF;
}

{ELSE} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return ELSE;
}

{FOR} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return FOR;
}

{RETURN} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return RETURN;
}

{INPUT} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return INPUT;
}

{OUTPUT} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return OUTPUT;
}

{ID} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return ID;
}

{SEMICOLON} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return SEMICOLON;
}

{COMMA} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return COMMA;
}

{OPEN_CURLY} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  scopeCounting++;
  return OPEN_CURLY;
}

{CLOSE_CURLY} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return CLOSE_CURLY;
}

{OPEN_PAREN} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return OPEN_PAREN;
}

{CLOSE_PAREN} {
  yylval.token.line = currentLine;
  yylval.token.column = currentColumn;
  strcpy(yylval.token.content, yytext);
  currentColumn += yyleng;
  return CLOSE_PAREN;
}

. {
  printf("%3d \t %4d \t", currentLine, currentColumn);
  printf(PRINT_RED " Lexical Error: %s\n" PRINT_RESET, yytext);
  totalErrors++;
  currentColumn += yyleng;
}

%%