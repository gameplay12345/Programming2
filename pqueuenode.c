#include <stdio.h>
#include <stdlib.h>
#include "pqueuenode.h"
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

void add(queue *q,int x,int y){
   nodepointer temp,mid;
   temp=(nodepointer)malloc(sizeof(struct queuenode));
   temp->data=x;
   temp->pri=y;
   temp->next=NULL;
   if(is_empty(*q)){
      (*q)->front=temp;
      (*q)->back=temp;
   }
   else{
	if((temp->pri)<=((*q)->back->pri)){
	   temp->next=NULL;
	   (*q)->back->next=temp;
	   (*q)->back=temp;
	}
	else{
	   if((temp->pri)>((*q)->front->pri)){
	      temp->next=(*q)->front;
	      (*q)->front=temp;
	   }
	   else{
	      mid=(*q)->front;
	      while((temp->pri)<=(mid->next->pri)){
		mid=mid->next;
	      }
	      temp->next=mid->next;
	      mid->next=temp;
           }
	}
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
      printf("data:%d priority:%d\n",temp->data,temp->pri);
      temp=temp->next;
   }
   printf("\n");
}
