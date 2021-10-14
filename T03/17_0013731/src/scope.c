/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Scope tree functions
*/

#include "../lib/scope.h"

#include "../lib/tree.h"

scopeNode* currentScope;

scopeNode* newScope(int id, scopeNode* parent, int depth) {
  scopeNode* new = (scopeNode*)malloc(sizeof(scopeNode));
  new->id = id;
  new->parent = parent;
  new->next = NULL;
  new->depth = depth;

  if (parent != NULL) {
    scopeNode* aux = parent;
    while (aux->next != NULL) {
      aux = aux->next;
    }
    aux->next = new;
  }

  return new;
}

void printScope(scopeNode* node) {
  if (node == NULL) {
    return;
  }
  for (int i = 0; i < node->depth; i++) {
    printf("  ");
  }
  if (node->id == 0) {
    printf("Scope " PRINT_CYAN "Global\n" PRINT_RESET);
  } else {
    printf("Scope " PRINT_CYAN "%d\n" PRINT_RESET, node->id);
  }

  printScope(node->next);
}

void freeScope(scopeNode* node) {
  if (node == NULL) {
    return;
  }

  freeScope(node->next);
  free(node);
}