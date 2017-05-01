#include <stdio.h>

/*
Author:Giovanni Bethel
Course: Programming 01
Program: This program will take and show numbers the user inputs
Input: stdin
Output:stdout
*/

int main(int argc,char*argv[]){
   int num1,num2;
      if(argc==3){
	sscanf(argv[1],"%d",& num1);
	sscanf(argv[2],"%d",& num2);
      }
      else{
	printf("Enter first number:");
	scanf("%d",& num1);
	printf("Enter second number:");
	scanf("%d",& num2);
      }
      printf("%d \n",num1);
      printf("%d \n",num2);
}
