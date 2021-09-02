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

#define PRINT_CYAN "\x1b[36m"
#define PRINT_RED "\x1b[31m"
#define PRINT_RESET "\x1b[0m"
typedef struct node {
  tokenElem value;
  char* nonTerminal;
  struct node* children[7];
} treeNode;

treeNode* createNode(char* name);
treeNode* addLeaf(tokenElem value);
void printTree(treeNode* node, int tabNum);
int nextIndex(treeNode* node);

#endif