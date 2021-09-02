/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Tree structure functions
*/

#include "../lib/tree.h"

treeNode* createNode(char* name) {
  treeNode* new = (treeNode*)malloc(sizeof(treeNode));
  new->nonTerminal = strdup(name);

  for (int i = 0; i < 7; i++) {
    new->children[i] = NULL;
  }

  return new;
}
treeNode* addLeaf(tokenElem value) {
  treeNode* leaf = (treeNode*)malloc(sizeof(treeNode));
  leaf->nonTerminal = NULL;
  leaf->value = value;

  return leaf;
}

int nextIndex(treeNode* node) {
  if (node->nonTerminal != NULL) {
    for (int i = 0; i < 7; i++) {
      if (node->children[i] == NULL) {
        return i;
      } else {
        return -1;
      }
    }
  }
}

void printTree(treeNode* node, int tabNum) {
  for (int i = 0; i < tabNum; i++) {
    printf(" ");
  }
  if (node->nonTerminal == NULL) {
    printf("↳ %s\n", node->value.content);
    return;
  } else {
    printf(PRINT_CYAN "%s:\n" PRINT_RESET, node->nonTerminal);
    for (int i = 0; i < 7; i++) {
      if (node->children[i] != NULL) {
        printTree(node->children[i], tabNum + 1);
      }
    }
  }
}