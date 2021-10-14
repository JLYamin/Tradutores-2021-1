/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Symbol table structure declarations
*/

#ifndef _SYMBOL_H_
#define _SYMBOL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/tree.h"
#include "../lib/token.h"
#include "../lib/scope.h"
#include "../cipl_syn.tab.h"

#define PRINT_CYAN "\x1b[36m"
#define PRINT_RED "\x1b[31m"
#define PRINT_RESET "\x1b[0m"

typedef struct symbol {
  char* identifier;
  int type;
  // 0 int, 1 float, 2 int list, 3 float list
  int isFunction;
  // 0 is variable, 1 is function
  int scopeNum;
  struct symbol* next;
} symbolElem;

typedef struct table {
  int id;
  symbolElem* symbols;
} tableNode;

tableNode* initTable(int counting);
void addSymbol(symbolElem* symbol, tableNode* table);
void newSymbol(char* identifier, char* type, int isFunction, int scopeNum, tableNode* table);
void printTable(tableNode* table);
void freeTable(tableNode* table);
int wasItDeclared(tableNode* table, char* identifier, int currentScope);
void mainWasDeclared(tableNode* table);
int getSymbolType(tableNode* table, char* identifier, scopeNode* currentScope);
int stringToType(char* type);

#endif