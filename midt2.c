#include <stdio.h>
#include <math.h>

/*
AUTHOR: Giovanni Bethel
COURSE: Computer Programming-Section 01
PROGRAM SUMMARY: This program complete certain math problems with input from comand line
INPUT: stdin
OUTPUT: stdout
*/

int main(int argc,char*argv[]){
   float num1,num2,ans,fans;
   char op;
   if(argc==4){
      sscanf(argv[1],"%f",& num1);
      sscanf(argv[2],"%c",& op);
      sscanf(argv[3],"%f",& num2);
      switch(op){
	case '+': ans=num1+num2;
	          printf("%.2f + %.2f = %.2f\n",num1,num2,ans);
	          break;
	case '-': ans=num1-num2;
	          printf("%.2f - %.2f = %.2f\n",num1,num2,ans);
	          break;
	case 'x':
	case 'X': ans=num1*num2;
	          printf("%.2f x %.2f = %.2f\n",num1,num2,ans);
	          break;
	case '/': if(num2!=0){
		     fans=(float)num1/num2;
		     printf("%.2f / %.2f = %.2f\n",num1,num2,fans);
	          }
	          else{ 
		     printf("!~ERROR~!Cannot Divide by 0.\n");
	          }
	          break;
	default: printf("%c is not a valid operator!\n",op);
      }/*switch statement*/
   }/*if statement*/
   else{
      if(argc==3){
	sscanf(argv[1],"%c",& op);
        sscanf(argv[2],"%f",& num1);
	switch(op){
	   case 'a':
	   case 'A': ans=fabs(num1);
	             printf("|%.2f| = %.2f\n",num1,ans);
	             break;
	   case 's':
	   case 'S': if(num1<0){
		        printf("!~ERROR~!Cannot find square root of negative number.\n");
	             }
	             else{
		        fans=sqrt(num1);
		        printf("Sqrt(%.2f) = %.2f\n",num1,fans);
	             }
	             break;
	   case 'n':
	   case 'N': ans=-1*num1;
		     printf("-(%.2f) = %.2f\n",num1,ans);
	             break;
	default:printf("%c is not a valid operator!\n",op);
        }/*switch*/
      }/*if statement*/
      else{
	printf("!~ERROR~!Invalid input on command line.\n");
      }
   }/*else statement*/
}
