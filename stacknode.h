#ifndef STACKNODE_H
#define STACKNODE_H
#include "boolean.h"
typedef struct stacknode{
   int data;
   struct stacknode *next;
}*stack;

void print_stack(stack);
int pop(stack*);
void push(stack*,int);
boolean is_empty(stack);
boolean is_full(void);
void init_stack(stack*);
#endif
