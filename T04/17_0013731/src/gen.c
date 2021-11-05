/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Intermediate code generator functions
*/

#include "../lib/gen.h"

int tempVarCounter = 0;

FILE* createFile(char* filename) {

  char* newName = malloc(strlen(filename) + 5);

  strcpy(newName, filename);

  for (int i = strlen(newName); i > 0; i--) {
    if (newName[i] == '.') {
      newName[i+1] = 't';
      newName[i+2] = 'a';
      newName[i+3] = 'c';
      newName[i+4] = '\0';
      break;
    }
  }

  FILE* file = fopen(newName, "w");
  free(newName);

  return file;
}

void genCode(FILE* file, tableNode* table, treeNode* root) {
  if (file) {
    fprintf(file, ".table\n");
    addTableDeclarations(file, table);
    fprintf(file, ".code\n");
    addCodeSnippets(file, root);
    fclose(file);
  }

}

void addTableDeclarations(FILE* file, tableNode* table) {
  symbolElem* currentNode = table->symbols;

  while (currentNode != NULL) {
    if (currentNode->isFunction == 0) {
      if (currentNode->type == 0) {
        fprintf(file, "int %s%d\n", currentNode->identifier, currentNode->scopeNum);
      } else if (currentNode->type == 1) {
        fprintf(file, "float %s%d\n", currentNode->identifier, currentNode->scopeNum);
      }
    }
    currentNode = currentNode->next;
  }
}

void addCodeSnippets(FILE* file, treeNode* node) {
  if (node == NULL) {
    return;
  }

  for (int i = 0; i < 5; i++) {
    if (node->children[i] != NULL) {
      addCodeSnippets(file, node->children[i]);
    }
  }

  if (node->nonTerminal != NULL) {
    if(strcmp(node->nonTerminal, "assign expression") == 0) {
      fprintf(file, "mov %s%d, ", node->children[0]->value.content, node->children[0]->value.scopeNum);

      if (node->children[2]->nonTerminal == NULL) {
        if (strcmp(node->children[2]->value.token_type, "ID") == 0) {
          fprintf(file, "%s%d\n", node->children[2]->value.content, node->children[2]->value.scopeNum);
        } else {
          fprintf(file, "%s\n", node->children[2]->value.content);
        }
      } else {
        fprintf(file, "$%d\n", previousCounter(1));
      }
    } else if (strcmp(node->nonTerminal, "signed expression") == 0) {
      // MINUS EXPRESSION
      if (strcmp(node->children[0]->value.content, "-") == 0) {
        fprintf(file, "minus $%d, ", addCounter());
        // if it's a terminal:
        if (node->children[1]->nonTerminal == NULL) {
          // if it's a variable:
          if (strcmp(node->children[1]->value.token_type, "ID") == 0) {
            fprintf(file, "%s%d\n", node->children[1]->value.content, node->children[1]->value.scopeNum);
          } else {
          // if it's a constant:
            fprintf(file, "%s\n", node->children[1]->value.content);
          }
        // if it isn't:
        } else {
          fprintf(file, "$%d\n", previousCounter(1));
        }
      }
    } else if (strcmp(node->nonTerminal, "unary expression") == 0) {
      if (strcmp(node->children[0]->value.content, "!") == 0 && (node->children[1]->nodeType == 0 || node->children[1]->nodeType == 1)) {
        fprintf(file, "not $%d, ", addCounter());
        // if it's a terminal:
        if (node->children[1]->nonTerminal == NULL) {
          // if it's a variable:
          if (strcmp(node->children[1]->value.token_type, "ID") == 0) {
            fprintf(file, "%s%d\n", node->children[1]->value.content, node->children[1]->value.scopeNum);
          } else {
          // if it's a constant:
            fprintf(file, "%s\n", node->children[1]->value.content);
          }
        // if it isn't:
        } else {
          fprintf(file, "$%d\n", previousCounter(1));
        }
      }
    }
  }
}

void addTypeConversion(FILE* file, int type, char* operand) {
  // TODO
}

int addCounter () {
  int variable = tempVarCounter % 9;
  tempVarCounter++;
  return variable;
}

int previousCounter(int steps) {
  return abs(tempVarCounter - steps) % 9;
}

