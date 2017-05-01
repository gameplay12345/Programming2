#include <stdio.h>
#include "boolean.h"
#include "treenode.h"

/*
AUTHOR: Giovanni Bethel
COURSE: Computer Programming 2
PROGRAM SUMMARY: This program will form a binary tree
INPUT: stdin
OUTPUT: stdout
*/


int main(void){
   int selection,data_item, something;
   bintree top;
   boolean quit=FALSE;
   boolean menu=TRUE;
   init_tree(&top);
   while(!quit){
      if(menu){
           printf("\nOptions are:\n");
           printf("1 Add\n");
           printf("2 Cut\n");
           printf("3 Print RNL\n");
	   printf("4 Print LNR\n");
           printf("5 Quit\n");
	   printf("6 Toggle Menu\n");
           printf("Enter Selection:");
           scanf("%d",& selection);
      }
      else{
	printf("Enter Selection(6 to turn on menu):");
	scanf("%d",& selection);
      }
      switch(selection){
	case 1:if(!is_full()){
		printf("What do you want to add to the tree?\n");
		scanf("%d",& data_item);
		add_tree(&top,data_item);
	       }
	       else
		printf("!~ERROR~!The tree is full.\n");
	       break;
	case 2:if(!is_empty(top)){
		printf("What number would you like to delete from the tree?\n");
		scanf("%d",& data_item); 
	        something=cut_tree(&top,data_item);
	       }
	       else
		printf("!~ERROR~!Tree is empty.\n");
	       break;
	case 3:if(!is_empty(top))
		print_RNL(top);
	       else
		printf("!~ERROR~!Nothing in tree to be printed.\n");
	       break;
	case 4:if(!is_empty(top))
		print_LNR(top);
	       else
		printf("!~ERROR~!Nothing in tree to be printed.\n");
	       break;
	case 5:quit=TRUE;
	       break;
	case 6:menu=!menu;
	       break;
	default:printf("%d is not a valid selection.\nPlease select again.\n",selection);
       }/*switch*/
    }/*while loop*/
   printf("Thank you for using the program,Goodbye!:)\n");
}

