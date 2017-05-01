#ifndef QUEUENODE_H
#define QUEUENODE_H
#include "boolean.h"
typedef struct queuenode{
   int data;
   int pri;
   struct queuenode *next;
}*nodepointer;

typedef struct endpointer{
   nodepointer front;
   nodepointer pri;
   nodepointer back;
}*queue;

void print_queue(queue);
int fetch(queue*);
void add(queue*,int,int);
boolean is_empty(queue);
boolean is_full(void);
void init_queue(queue*);
#endif
