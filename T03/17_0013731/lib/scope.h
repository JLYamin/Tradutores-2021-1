/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Scope struct declarations
*/

#ifndef _SCOPE_H_
#define _SCOPE_H_

#include <stdio.h>
#include <stdlib.h>

#include "../lib/tree.h"

typedef struct scope {
  int id;
  int depth;
  struct scope* parent;
  struct scope* next;
} scopeNode;

extern scopeNode* currentScope;

scopeNode* newScope(int id, scopeNode* parent, int parentDepth);
void printScope(scopeNode* node);
void freeScope(scopeNode* node);

#endif