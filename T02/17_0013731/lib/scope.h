/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Scope stack declarations
*/

#ifndef _SCOPE_H_
#define _SCOPE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  struct node* next;
  int scopeNum;
} stackNode;

stackNode* createNode(int newScope);
int isEmpty(stackNode* top);
void pushScope(int newScope, stackNode** top);
void popScope(stackNode** top);
int peekTop(stackNode* top);

#endif