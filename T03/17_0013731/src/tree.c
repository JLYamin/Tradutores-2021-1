/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Tree structure functions
*/

#include "../lib/tree.h"


treeNode* createNode(char* name) {
  treeNode* new = (treeNode*)malloc(sizeof(treeNode));
  new->nonTerminal = strdup(name);
  new->nodeType = -1;
  new->nodeConversion = -1;

  for (int i = 0; i < 5; i++) {
    new->children[i] = NULL;
  }

  return new;
}

treeNode* addLeaf(tokenElem value, int type) {
  treeNode* leaf = (treeNode*)malloc(sizeof(treeNode));
  leaf->nonTerminal = NULL;
  leaf->value = value;
  leaf->nodeType = type;
  leaf->nodeConversion = -1;

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

    printf("↳ %s " PRINT_PURPLE "%s" PRINT_RESET, node->value.content, getTypeString(node->nodeType));

    if (node->nodeConversion > -1) {
      printf(PRINT_YELLOW " ← %s" PRINT_RESET, getConversionType(node->nodeConversion));
    }

    if (strcmp(node->value.token_type, "ID") == 0) {
      printf(PRINT_GREEN " (scope %d)" PRINT_RESET, node->value.scopeNum);
    }

    printf("\n");

    return;
  } else {
    if (strcmp(node->nonTerminal, "invisible node") != 0) {
      for (int i = 0; i < tabNum; i++) {
        printf(" ");
      }

      printf(PRINT_CYAN "%s: " PRINT_PURPLE "%s" PRINT_RESET, node->nonTerminal, getTypeString(node->nodeType));
      
      if (node->nodeConversion > -1) {
        printf(PRINT_YELLOW " ← %s" PRINT_RESET, getConversionType(node->nodeConversion));
      }

      printf("\n");
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

char* getTypeString (int value) {
  if (value >= 0) {
    switch (value) {
    case 0:
      return "<int>";
    case 1:
      return "<float>";
    case 2:
      return "<int list>";
    case 3:
      return "<float list>";
    case 4:
      return "<nil>";
    case 5:
      return "<string>";
    default:
      return "<undefined>";
    }
  } else {
    return "";
  }
}

char* getConversionType (int value) {
  switch (value) {
  case 0:
    return "[intToFloat]";
  case 1:
    return "[floatToInt]";
  default:
    return "";
  }
}