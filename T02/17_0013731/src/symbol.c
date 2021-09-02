/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Symbol table functions
*/

#include "../lib/symbol.h"

tableNode* initTable(int counting) {
  tableNode* table = (tableNode*)malloc(sizeof(tableNode));
  table->id = counting;
  table->symbols = NULL;
  return table;
}

void addSymbol(symbolElem* symbol, tableNode* table) {
  symbol->next = table->symbols;
  table->symbols = symbol;
}

void newSymbol(char* identifier, char* type, int isFunction, int scopeNum, tableNode* table) {
  symbolElem* symbol = (symbolElem*)malloc(sizeof(symbolElem));
  symbol->identifier = strdup(identifier);

  if (strcmp(type, "float") == 0) {
    symbol->type = 1;
  } else if (strcmp(type, "int list") == 0) {
    symbol->type = 2;
  } else if (strcmp(type, "float list") == 0) {
    symbol->type = 3;
  } else {
    symbol->type = 0;
  }
  symbol->isFunction = isFunction;
  symbol->scopeNum = scopeNum;

  addSymbol(symbol, table);
}

void printTable(tableNode* table) {
  symbolElem* currentNode = table->symbols;

  printf("\nSymbol Table:\n");
  printf(PRINT_CYAN "=================================================== \n" PRINT_RESET);
  printf("Identifier\tType\tisFunction\tScopeNum\n");
  printf(PRINT_CYAN "=================================================== \n" PRINT_RESET);
  while (currentNode != NULL) {
    printf("%-10.10s\t%2d\t%5d\t\t%5d \n", currentNode->identifier, currentNode->type, currentNode->isFunction, currentNode->scopeNum);
    printf(PRINT_CYAN "--------------------------------------------------- \n" PRINT_RESET);
    currentNode = currentNode->next;
  }
}

void freeTable(tableNode* table) {
  symbolElem* currentNode = table->symbols;
  symbolElem* aux;
  free(table);
  while (currentNode != NULL) {
    aux = currentNode;
    currentNode = currentNode->next;
    free(aux->identifier);
    free(aux);
  }
}