#include <stdio.h>
#include <stdlib.h>
#include "treenode.h"
#include "boolean.h"

void init_tree(bintree *t){
   (*t)=NULL;
}

boolean is_full(void){
   bintree temp;
   temp=(bintree)malloc(sizeof(struct treenode));
   if(temp == NULL)
      return TRUE;
   else{
      free(temp);
      return FALSE;
   }
}

boolean is_empty(bintree t){
   if(t==NULL)
      return TRUE;
   else
      return FALSE;
}

void add_tree(bintree *t,int data){
   bintree temp;
   if(is_empty(*t)){
      temp=(bintree)malloc(sizeof(struct treenode));
      temp->left=NULL;
      temp->right=NULL;
      temp->data=data;
      (*t)=temp;
   }
   else{
      if((data)<=((*t)->data))
	add_tree(&(*t)->left,data);
      else
	add_tree(&(*t)->right,data);
   }
}

int cut_tree(bintree *t,int data_item){
   bintree temp;
   if(!is_empty(*t)){
      if(((*t)->data)==(data_item)){
	if(((*t)->left==NULL) && ((*t)->right==NULL)){
	   temp=(*t);
	   (*t)=NULL;
	   free (temp);
        }
	else if(((*t)->left!=NULL) && ((*t)->right==NULL)){
	   temp=(*t);
	   (*t)=(*t)->left;
	   free (temp);
	}
	else if(((*t)->right!=NULL) && ((*t)->left==NULL)){
	   temp=(*t);
	   (*t)=(*t)->right;
	   free (temp);
	}
	   else {
	      temp=(*t)->right;
	      while(temp->left!=NULL)
		temp=temp->left;
	      temp->left=(*t)->left;
	      temp=(*t);
	      (*t)=(*t)->right;
	      free(temp);
	   }
      }
      else{
	if((data_item)<=((*t)->data))
	   cut_tree(&(*t)->left,data_item);
	else
	   cut_tree(&(*t)->right,data_item);
      }
   }
   else
      printf("Data not found in tree.\n");
}/*subprogram*/

void print_LNR(bintree t){
   if(!is_empty(t)){
      print_LNR(t->left);
      printf("%d ",t->data);
      print_LNR(t->right);
   }
}

void print_RNL(bintree t){
   if(!is_empty(t)){
     print_RNL(t->right);
     printf("%d ",t->data);
     print_RNL(t->left);
   }
}
