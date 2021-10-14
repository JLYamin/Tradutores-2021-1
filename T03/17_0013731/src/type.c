/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Type functions
*/

#include "../lib/type.h"
#include "../cipl_syn.tab.h"

extern int totalErrors;
extern int currentLine;
extern int currentColumn;

int solveType(tokenElem operator, treeNode* nodeA, treeNode* nodeB) {

  if (nodeA->nodeType < 0 || nodeB->nodeType < 0) { 
    return -1;
  }

  // Number Operators
  if (strcmp(operator.content, "+") == 0 || strcmp(operator.content, "-") == 0
      || strcmp(operator.content, "*") == 0 || strcmp(operator.content, "/") == 0) {
    if (nodeA->nodeType == 1 && nodeB->nodeType == 1) {
      return 1; // float
    } else if (nodeA->nodeType == 0 && nodeB->nodeType == 1) {
      // intToFloat is 0, floatToInt is 1
      nodeA->nodeConversion = 0;
      return 1; // float
    } else if (nodeA->nodeType == 1 && nodeB->nodeType == 0) {
      // intToFloat is 0, floatToInt is 1
      nodeB->nodeConversion = 0;
      return 1; // float
    } else if (nodeA->nodeType == 0 && nodeB->nodeType == 0) {
      return 0; // int
    }
    // List Operators
  } else if (strcmp(operator.content, ">>") == 0) { // Map
    // TODO: verify nodeA is a unary function
    if (nodeA->nodeType == 0) {
      return 2; // int list
    } else if (nodeA->nodeType == 1) {
      return 3; // float list
    }
  } else if (strcmp(operator.content, "<<") == 0) { // Filter
    // TODO: verify nodeA is a unary function
    if (nodeB->nodeType == 4) {
      return 4; // nil
    } else if (nodeB->nodeType == 2) {
      return 2; // int list
    } else if (nodeB->nodeType == 3) {
      return 3; // float list
    }
  } else if (strcmp(operator.content, ":") == 0) { // Constructor
    if (((nodeA->nodeType == 0) && nodeB->nodeType == 3)
        || ((nodeA->nodeType == 1) && nodeB->nodeType == 2)) {
      // intToFloat is 0, floatToInt is 1
      nodeA->nodeConversion = nodeA->nodeType;
      return nodeB->nodeType;
    } else if (((nodeA->nodeType == 0) && nodeB->nodeType == 2)
        || ((nodeA->nodeType == 1) && nodeB->nodeType == 3)) {
      return nodeB->nodeType;
    } else if (nodeB->nodeType == 4 && (nodeA->nodeType == 0 || nodeA->nodeType == 1)) {
      return nodeA->nodeType+2; // int list or float list
    }
    // Relational Operators
  } else if (strcmp(operator.content, "<") == 0 || strcmp(operator.content, "<=") == 0
      || strcmp(operator.content, ">") == 0 || strcmp(operator.content, ">=") == 0
      || strcmp(operator.content, "==") == 0 || strcmp(operator.content, "!=") == 0) {
    if ((nodeA->nodeType == 0 || nodeA->nodeType == 1) && (nodeB->nodeType == 0 || nodeB->nodeType == 1)) {
      return 0; // int
    } else if (((nodeA->nodeType == 2 && nodeB->nodeType == 4) || (nodeA->nodeType == 3 && nodeB->nodeType == 4)
        || (nodeA->nodeType == 4 && nodeB->nodeType == 2) || (nodeA->nodeType == 4 && nodeB->nodeType == 3))
        && (strcmp(operator.content, "==") == 0 || strcmp(operator.content, "!=") == 0)) {
      return 0; // int
    }
  } else if (strcmp(operator.content, "=") == 0) {
    if (nodeA->nodeType == nodeB->nodeType
        || ((nodeA->nodeType == 2 || nodeA->nodeType == 3) && nodeB->nodeType == 4)) {
      return nodeA->nodeType;
    } else if ((nodeA->nodeType == 1 && nodeB->nodeType == 0) || (nodeA->nodeType == 0 && nodeB->nodeType == 1)) {
      // intToFloat is 0, floatToInt is 1
      nodeB->nodeConversion = nodeB->nodeType;
      return nodeA->nodeType;
    } else {
      printf("%3d \t %4d \t " PRINT_RED "Semantic Error: can't assign %s to %s\n" PRINT_RESET, currentLine, currentColumn, getTypeString(nodeB->nodeType), getTypeString(nodeA->nodeType));
      totalErrors++;
      return -1; // undefined
    }
  }

  printf("%3d \t %4d \t " PRINT_RED "Semantic Error: (%s) operation between %s and %s is undefined\n" PRINT_RESET, currentLine, currentColumn, operator.content, getTypeString(nodeA->nodeType), getTypeString(nodeB->nodeType));
  totalErrors++;
  return -1; // undefined
}

int solveUnaryType(tokenElem operator, treeNode* node) {

  if (node->nodeType == 4) {
    printf("%3d \t %4d \t " PRINT_RED "Semantic Error: %s operation on NIL is undefined\n" PRINT_RESET, currentLine, currentColumn, operator.content);
    totalErrors++;
    return -1; // undefined
  }
  
  if (strcmp(operator.content, "!") == 0 || strcmp(operator.content, "%") == 0) {
    if (node->nodeType == 2 || node->nodeType == 3) {
      return node->nodeType;
    }
  } else if (strcmp(operator.content, "?") == 0) {
    if (node->nodeType == 2 || node->nodeType == 3) {
      return node->nodeType - 2;
    }
  } else if (strcmp(operator.content, "-") == 0 || strcmp(operator.content, "+") == 0 ) {
    return node->nodeType;
  }
  printf("%3d \t %4d \t " PRINT_RED "Semantic Error: %s operation on %s is undefined\n" PRINT_RESET, currentLine, currentColumn, operator.content, getTypeString(node->nodeType));
  totalErrors++;
  return -1; // undefined
}

void checkIOArgs(treeNode* node) {
  if (strcmp(node->nonTerminal, "input") == 0
      && (node->children[1]->nodeType != 0 && node->children[1]->nodeType != 1)) {
    printf("%3d \t %4d \t " PRINT_RED "Semantic Error: invalid input argument %s type \n" PRINT_RESET, currentLine, currentColumn, getTypeString(node->children[1]->nodeType));
    totalErrors++;
  } else if (strcmp(node->nonTerminal, "output") == 0 && node->children[1]->nodeType != 5 
      && node->children[1]->nodeType != 0 && node->children[1]->nodeType != 1) {
    printf("%3d \t %4d \t " PRINT_RED "Semantic Error: invalid output argument %s type \n" PRINT_RESET, currentLine, currentColumn, getTypeString(node->children[1]->nodeType));
    totalErrors++;
  }
}

void checkReturn(treeNode* returnNode, int functionType) {
  int returnType = returnNode->nodeType;
  if (functionType == returnType
      || ((functionType == 2 || functionType == 3) && returnType == 4)) {
    return;
  } else if ((functionType == 1 && returnType == 0) || (functionType == 0 && returnType == 1)) {
    // intToFloat is 0, floatToInt is 1
    returnNode->nodeConversion = returnType;
  } else {
    printf("%3d \t %4d \t " PRINT_RED "Semantic Error: %s return doesn't match function type %s \n" PRINT_RESET, currentLine, currentColumn, getTypeString(returnType), getTypeString(functionType));
    totalErrors++;
  } 
}

void checkParams(char* identifier, treeNode* arguments, tableNode* table) {
  treeNode* currentNode = arguments;
  symbolElem* currentSymbol = table->symbols;
  int params[128]; // Maximum of params in C
  treeNode* args[128];
  int functionScope = 0;

  // Find function scope
  while (currentSymbol != NULL) {
    if (currentSymbol->isFunction == 1 && strcmp(currentSymbol->identifier, identifier) == 0) {
      functionScope = currentSymbol->thisFunctionScope;
      break;
    }
    currentSymbol = currentSymbol->next;
  }

  // Find params
  int symbolIterator = 0;
  currentSymbol = table->symbols;
  while (currentSymbol != NULL) {
    if (currentSymbol->isFunction == 2 && currentSymbol->scopeNum == functionScope) {
      params[symbolIterator] = currentSymbol->type;
      symbolIterator++;
    }
    currentSymbol = currentSymbol->next;
  }

  // Iterate args
  int nodeIterator = 0;
  while(currentNode != NULL) {
    if (currentNode->nonTerminal != NULL
        && strcmp(currentNode->nonTerminal, "arguments list") == 0) {
      args[nodeIterator] = currentNode->children[1];
      nodeIterator++;
    } else {
      args[nodeIterator] = currentNode;
      nodeIterator++;
      break;
    }
    currentNode = currentNode->children[0];
  }

  // Match args and params
  if (symbolIterator < nodeIterator) {
    printf("%3d \t %4d \t " PRINT_RED "Semantic Error: too many arguments in %s's call. Expected %d, got %d arguments.\n" PRINT_RESET, currentLine, currentColumn, identifier, symbolIterator, nodeIterator);
    totalErrors++;
  } else if (symbolIterator > nodeIterator) {
    printf("%3d \t %4d \t " PRINT_RED "Semantic Error: arguments missing in %s's call. Expected %d, got %d arguments.\n" PRINT_RESET, currentLine, currentColumn, identifier, symbolIterator, nodeIterator);
    totalErrors++;
  } else {
    for (int i = 0; i < symbolIterator; i++) {
      if ((args[i]->nodeType == 0 && params[i] == 1) || (args[i]->nodeType == 1 && params[i] == 0)) {
        args[i]->nodeConversion = args[i]->nodeType;
      } else if ((args[i]->nodeType == params[i]) || ((params[i] == 2 || params[i] == 3) && args[i]->nodeType == 4)) {
        continue;
      } else {
        printf("%3d \t %4d \t " PRINT_RED "Semantic Error: %s argument doesn't match %s in %s's call.\n" PRINT_RESET, currentLine, currentColumn, getTypeString(args[i]->nodeType), getTypeString(params[i]), identifier);
      }
    }
  }
}