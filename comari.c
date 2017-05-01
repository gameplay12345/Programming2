#include <stdio.h>
#include "boolean.h"
#include "complex.h"
#include "complex_arith.h"
#include "complex_IO.h"

/*
AUTHOR: Giovanni Bethel
COURSE: Computer Programming-Section 01
PROGRAM SUMMARY: This program will be able to solve complex arithmatic problems
INPUT: stdin
OUTPUT: stdout
*/

int main(void){
   int selection;
   complex num1,num2,ans;
   boolean quit=FALSE;
   boolean menu=TRUE;
   while(!quit){
      if(menu){
	int choice;
           printf("Options are:\n");
           printf("1 Add\n");
           printf("2 Subtract\n");
           printf("3 Multiply\n");
           printf("4 Divide\n");
           printf("5 Conjugate\n");
           printf("6 Negate\n");
           printf("7 Toggle Menu\n");
           printf("8 Quit\n");
           printf("Enter Selection:");
           scanf("%d",& selection);
      }
      else{
	printf("Enter Selection(7 to turn on menu):");
	scanf("%d",& selection);
      }
      switch(selection){
	case 1:num1=read_complex();
	       num2=read_complex();
	       ans=add_complex(num1,num2);
	       write_complex(ans);
	       break;
	case 2:num1=read_complex();
	       num2=read_complex();
	       ans=subtract_complex(num1,num2);
	       write_complex(ans);
	       break;
	case 3:num1=read_complex();
	       num2=read_complex();
	       ans=multiply_complex(num1,num2);
	       write_complex(ans);
	       break;
	case 4:num1=read_complex();
	       num2=read_complex();
	       divide_complex(num1,num2);
	       break;
	case 5:num1=read_complex();
	       ans=conjugate_complex(num1);
	       write_complex(ans);
	       break;
	case 6:num1=read_complex();
	       ans=negate_complex(num1);
	       write_complex(ans);
	       break;
	case 7:menu=!menu;
	       break;
	case 8:quit=TRUE;
	       break;
	default:printf("%d is not a valid selection.\nPlease select again.\n",selection);
       }/*switch*/
    }/*while loop*/
   printf("Thank you for using the program,Goodbye!\n");
}
