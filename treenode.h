#ifndef TREENODE_H
#define TREENODE_H
#include "boolean.h"
typedef struct treenode{
   int data;
   struct treenode *left,*right;
}*bintree;

void print_RNL(bintree);
void print_LNR(bintree);
int cut_tree(bintree*,int);
void add_tree(bintree*,int);
boolean is_empty(bintree);
boolean is_full(void);
void init_tree(bintree*);
#endif
