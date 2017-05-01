#include <stdio.h>
#include "boolean.h"
#include "pqueuenode.h"

/*
AUTHOR: Giovanni Bethel
COURSE: Computer Programming-Section 02
PROGRAM SUMMARY: This program will sort through queues.
INPUT: stdin
OUTPUT: stdout
*/


int main(void){
   int selection,data_item,pri_item,something;
   queue top;
   boolean quit=FALSE;
   boolean menu=TRUE;
   init_queue(&top);
   while(!quit){
      if(menu){
           printf("\nOptions are:\n");
           printf("1 Add\n");
           printf("2 Fetch\n");
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
		printf("What do you want to add to the line and what is its priority? ");
		scanf("%d",& data_item);
		scanf("%d",& pri_item);
		add(&top,data_item,pri_item);
	       }
	       else
		printf("!~ERROR~!The queue is full.\n");
	       break;
	case 2:if(!is_empty(top)){
	        something=fetch(&top);
		printf("%d was removed from the Line.\n", something);
	       }
	       else
		printf("!~ERROR~!Line is empty.\n");
	       break;
	case 3:if(!is_empty(top))
		print_queue(top);
	       else
		printf("!~ERROR~!Nothing in line to be listed.\n");
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

