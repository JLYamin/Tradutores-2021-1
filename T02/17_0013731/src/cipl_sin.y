%define lr.type canonical-lr;

%{
  #include <stdio.h>
  #include "../lib/token.h"
  #include "../lib/tree.h"
  #include "../lib/symbol.h"
%}

%union{
  struct Token* token;
  struct TreeNode* node;
}

%token <token> regra;
%type <node> regra;
