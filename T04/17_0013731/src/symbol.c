/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Symbol table functions
*/

#include "../lib/symbol.h"

extern int totalErrors;
extern int currentLine;
extern int currentColumn;
extern int scopeCounting;
extern int semanticErrors;

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

  if (isFunction == 1) {
    symbol->thisFunctionScope = scopeCounting+1;
  } else {
    symbol->thisFunctionScope = -1;
  }

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

  if (wasItDeclared(table, identifier, scopeNum)) {
    addSymbol(symbol, table);
  }
}

void printTable(tableNode* table) {
  symbolElem* currentNode = table->symbols;

  printf("\nSymbol Table:\n");
  printf(PRINT_CYAN "========================================================== \n" PRINT_RESET);
  printf("Identifier\tType\t\tisFunction\tScopeNum\n");
  printf(PRINT_CYAN "========================================================== \n" PRINT_RESET);
  while (currentNode != NULL) {
    char* type = "int";
    if (currentNode->type == 1) {
      type = "float";
    } else if (currentNode->type == 2) {
      type = "int list";
    } else if (currentNode->type == 3) {
      type = "float list";
    }

    char* isFunction = "var";
    if (currentNode->isFunction == 1) {
      isFunction = "function";
    } else if (currentNode->isFunction == 2) {
      isFunction = "param";
    }

    printf("%-10.10s\t%-10.10s\t%-8.8s\t%1d \n", currentNode->identifier, type, isFunction, currentNode->scopeNum);
    printf(PRINT_CYAN "--------------------------------------------------------- \n" PRINT_RESET);
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

int wasItDeclared (tableNode* table, char* identifier, int currentScope) {
  symbolElem* currentNode = table->symbols;

  while (currentNode != NULL) {
    if (strcmp(currentNode->identifier, identifier) == 0 && currentScope == currentNode->scopeNum) {
      printf("%3d \t %4d \t " PRINT_RED "Semantic Error: redefinition of %s\n" PRINT_RESET, currentLine, currentColumn, currentNode->identifier);
      semanticErrors++;
      return 0;
    }
    currentNode = currentNode->next;
  }
  return 1;
}

void mainWasDeclared(tableNode* table) {
  symbolElem* currentNode = table->symbols;

  while (currentNode != NULL) {
    if (strcmp(currentNode->identifier, "main") == 0 && currentNode->scopeNum == 0) {
      return;
    }
    currentNode = currentNode->next;
  }
  printf("%3d \t %4d \t " PRINT_RED "Semantic Error: missing main function\n" PRINT_RESET, currentLine, currentColumn);
  semanticErrors++;
}

int getSymbolType(tableNode* table, char* identifier, scopeNode* currentScope) {
  symbolElem* currentSymbol;
  scopeNode* scope = currentScope;

  while (scope != NULL) {
    currentSymbol = table->symbols;
    while (currentSymbol != NULL) {
      if (strcmp(currentSymbol->identifier, identifier) == 0 && scope->id == currentSymbol->scopeNum) {
        return currentSymbol->type;
      }
      currentSymbol = currentSymbol->next;
    }
    scope = scope->parent;
  }
  printf("%3d \t %4d \t " PRINT_RED "Semantic Error: %s was not declared in this scope\n" PRINT_RESET, currentLine, currentColumn, identifier);
  semanticErrors++;
  return -1;
}

int getSymbolScope(tableNode* table, char* identifier, scopeNode* currentScope) {
  symbolElem* currentSymbol;
  scopeNode* scope = currentScope;

  while (scope != NULL) {
    currentSymbol = table->symbols;
    while (currentSymbol != NULL) {
      if (strcmp(currentSymbol->identifier, identifier) == 0 && scope->id == currentSymbol->scopeNum) {
        return currentSymbol->scopeNum;
      }
      currentSymbol = currentSymbol->next;
    }
    scope = scope->parent;
  }
  printf("%3d \t %4d \t " PRINT_RED "Semantic Error: %s was not declared in this scope\n" PRINT_RESET, currentLine, currentColumn, identifier);
  semanticErrors++;
  return -1;
}

int stringToType(char* type) {
  if (strcmp(type, "float") == 0) {
    return 1;
  } else if (strcmp(type, "int list") == 0) {
    return 2;
  } else if (strcmp(type, "float list") == 0) {
    return 3;
  } else {
    return 0;
  }
}
