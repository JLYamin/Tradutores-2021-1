/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Scope stack implementation
*/

#include "../lib/scope.h"

stackNode* createNode(int newScope) {
  stackNode* newNode = (stackNode*)malloc(sizeof(stackNode));

  newNode->scopeNum = newScope;
  newNode->next = NULL;

  return newNode;
}

int isEmpty(stackNode* top) {
  return top == NULL;
}

void pushScope(int newScope, stackNode** top) {
  stackNode* newNode = createNode(newScope);
  newNode->next = *top;
  *top = newNode;
}

void popScope(stackNode** top) {
  if (!isEmpty(*top)) {
    stackNode* aux = *top;
    *top = (*top)->next;

    free(aux);
  }
}

int peekTop(stackNode* top) {
  if (isEmpty(top)) {
    return -1;
  }

  return top->scopeNum;
}