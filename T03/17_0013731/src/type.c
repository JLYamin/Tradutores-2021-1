/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Type functions
*/

#include "../lib/type.h"
#include "../cipl_syn.tab.h"

extern int totalErrors;
extern int currentLine;
extern int currentColumn;

int solveType(char* operatorType, treeNode* nodeA, treeNode* nodeB) {

  if (nodeA->nodeType < 0 || nodeB->nodeType < 0) { 
    return -1;
  }

  if (strcmp(operatorType, "arithmetic") == 0) {
    if (nodeA->nodeType == 1 && nodeB->nodeType == 1) {
      return 1; // float
    } else if ((nodeA->nodeType == 0 && nodeB->nodeType == 1) || (nodeA->nodeType == 1 && nodeB->nodeType == 0)) {
      // TODO: add implicit conversion node
      return 1; // float
    } else if (nodeA->nodeType == 0 && nodeB->nodeType == 0) {
      return 0; // int
    }
  } else if (strcmp(operatorType, "list") == 0) {
    if ((nodeA->nodeType == 2 && nodeB->nodeType == 2)
        || (nodeA->nodeType == 4 && nodeB->nodeType == 2)
        || (nodeA->nodeType == 2 && nodeB->nodeType == 4)) {
      return 2; // int list
    } else if ((nodeA->nodeType == 3 && nodeB->nodeType == 3)
        || (nodeA->nodeType == 4 && nodeB->nodeType == 3)
        || (nodeA->nodeType == 3 && nodeB->nodeType == 4)) {
      return 3; // float list
    }
  }  else if (strcmp(operatorType, "relational") == 0) {
    if ((nodeA->nodeType == 0 || nodeA->nodeType == 1) && (nodeB->nodeType == 0 || nodeB->nodeType == 1)) {
      return 0; // int
    } else if ((nodeA->nodeType == 2 && nodeB->nodeType == 4) || (nodeA->nodeType == 3 && nodeB->nodeType == 4)
        || (nodeA->nodeType == 4 && nodeB->nodeType == 2) || (nodeA->nodeType == 4 && nodeB->nodeType == 3)) {
      return 0; // int
    }
  }

  printf("%3d \t %4d \t " PRINT_RED "Semantic Error: %s operation between %s and %s is undefined\n" PRINT_RESET, currentLine, currentColumn, operatorType, getTypeString(nodeA->nodeType), getTypeString(nodeB->nodeType));
  totalErrors++;
  return -1; // undefined
}

int solveUnaryType(tokenElem operator, treeNode* node) {
  
}