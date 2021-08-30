/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Tree structure declarations
*/

#ifndef _TREE_H_
#define _TREE_H_

#include <stdio.h>
#include <stdlib.h>

#include "token.h"
typedef struct node {
  tokenElem value;
  struct node* children[10];
} treeNode;

treeNode* createLeaf(tokenElem value);
void addLeaf(tokenElem value, treeNode** parent);
void printTree(treeNode** root);

#endif