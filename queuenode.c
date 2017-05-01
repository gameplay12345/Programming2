#include <stdio.h>
#include <stdlib.h>
#include "queuenode.h"
#include "boolean.h"

void init_queue(queue *q){
   (*q)=(queue)malloc(sizeof(struct endpointer));
   (*q)->front=NULL;
   (*q)->back=NULL;
}

boolean is_full(void){
   nodepointer temp;
   temp=(nodepointer)malloc(sizeof(struct queuenode));
   if(temp == NULL)
      return TRUE;
   else{
      free(temp);
      return FALSE;
   }
}

boolean is_empty(queue q){
   if((q->front==NULL) && (q->back==NULL))
      return TRUE;
   else
      return FALSE;
}

void add(queue *q,int x){
   nodepointer temp;
   temp=(nodepointer)malloc(sizeof(struct queuenode));
   temp->data=x;
   temp->next=NULL;
   if(is_empty(*q)){
      (*q)->front=temp;
      (*q)->back=temp;
   }
   else{
      (*q)->back->next=temp;
      (*q)->back=temp;
   }
}

int fetch(queue *q){
   nodepointer temp;
   int data_fetched;
   temp=(*q)->front;
   data_fetched=temp->data;
   if((*q)->front==(*q)->back){
      (*q)->front=NULL;
      (*q)->back=NULL;
   }
   else{
      (*q)->front=temp->next;
   }
   free(temp);
   return data_fetched;
}

void print_queue(queue q){
   nodepointer temp;
   temp=(q)->front;
   while(temp!=NULL){
      printf("%d ",temp->data);
      temp=temp->next;
   }
   printf("\n");
}
