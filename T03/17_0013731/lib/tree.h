/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Tree structure declarations
*/

#ifndef _TREE_H_
#define _TREE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "token.h"

#define PRINT_CYAN    "\x1b[36m"
#define PRINT_PURPLE  "\x1b[35m"
#define PRINT_YELLOW  "\x1b[33m"
#define PRINT_GREEN   "\x1b[32m"
#define PRINT_RED     "\x1b[31m"
#define PRINT_RESET   "\x1b[0m"
typedef struct node {
  tokenElem value;
  char* nonTerminal;
  struct node* children[5];
  int nodeType; // -1 without type, 0 int, 1 float, 2 int list, 3 float list, 4 NIL, 5 string
  int nodeConversion; // -1 no conversion, 0 intToFloat, 1 floatToInt
} treeNode;

treeNode* createNode(char* name);
treeNode* addLeaf(tokenElem value, int type);
void printTree(treeNode* node, int tabNum);
void freeTree(treeNode* node);
char* getTypeString (int value);
char* getConversionType (int value);

#endif