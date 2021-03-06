/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Tree structure functions
*/

#include "../lib/tree.h"

treeNode* createNode(char* name) {
  treeNode* new = (treeNode*)malloc(sizeof(treeNode));
  new->nonTerminal = strdup(name);

  for (int i = 0; i < 5; i++) {
    new->children[i] = NULL;
  }

  return new;
}

treeNode* addLeaf(tokenElem value) {
  treeNode* leaf = (treeNode*)malloc(sizeof(treeNode));
  leaf->nonTerminal = NULL;
  leaf->value = value;

  for (int i = 0; i < 5; i++) {
    leaf->children[i] = NULL;
  }

  return leaf;
}

void printTree(treeNode* node, int tabNum) {
  if (node == NULL) {
    return;
  }

  if (node->nonTerminal == NULL) {
    for (int i = 0; i < tabNum; i++) {
      printf(" ");
    }
    printf("↳ %s\n", node->value.content);
    return;
  } else {
    if (strcmp(node->nonTerminal, "invisible node") != 0) {
      for (int i = 0; i < tabNum; i++) {
        printf(" ");
      }
      printf(PRINT_CYAN "%s:\n" PRINT_RESET, node->nonTerminal);
      for (int i = 0; i < 5; i++) {
        if (node->children[i] != NULL) {
          printTree(node->children[i], tabNum + 1);
        }
      }
    } else {
      for (int i = 0; i < 5; i++) {
        if (node->children[i] != NULL) {
          printTree(node->children[i], tabNum);
        }
      }
    }
  }
}

void freeTree(treeNode* node) {
  if (node == NULL) {
    return;
  }

  if (node->nonTerminal != NULL) {
    free(node->nonTerminal);
  }

  for (int i = 0; i < 5; i++) {
    treeNode* aux = node->children[i];
    if (aux != NULL) {
      freeTree(aux);
    }
  }

  free(node);
}