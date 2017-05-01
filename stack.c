#include <stdio.h>
#include "boolean.h"
#include "stacknode.h"

/*
AUTHOR: Giovanni Bethel
COURSE: Computer Programming-Section 01
PROGRAM SUMMARY: This program will sort through stacks
INPUT: stdin
OUTPUT: stdout
*/


int main(void){
   int selection,data_item, something;
   stack top;
   boolean quit=FALSE;
   boolean menu=TRUE;
   init_stack(&top);
   while(!quit){
      if(menu){
           printf("\nOptions are:\n");
           printf("1 Push\n");
           printf("2 Pop\n");
           printf("3 List\n");
           printf("4 Quit\n");
	   printf("5 Toggle Menu\n");
           printf("Enter Selection:");
           scanf("%d",& selection);
      }
      else{
	printf("Enter Selection(5 to turn on menu):");
	scanf("%d",& selection);
      }
      switch(selection){
	case 1:if(!is_full()){
		printf("What do you wnat to push on the top?\n");
		scanf("%d",& data_item);
		push(&top,data_item);
	       }
	       else
		printf("!~ERROR~!The stack is full.\n");
	       break;
	case 2:if(!is_empty(top)){
	        something=pop(&top);
		printf("%d was removed from the stack.\n", something);
	       }
	       else
		printf("!~ERROR~!Stack is empty.\n");
	       break;
	case 3:if(!is_empty(top))
		print_stack(top);
	       else
		printf("!~ERROR~!Nothing in stack to be listed.\n");
	       break;
	case 4:quit=TRUE;
	       break;
	case 5:menu=!menu;
	       break;
	default:printf("%d is not a valid selection.\nPlease select again.\n",selection);
       }/*switch*/
    }/*while loop*/
   printf("Thank you for using the program,Goodbye!:)\n");
}

