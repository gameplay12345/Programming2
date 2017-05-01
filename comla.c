#include <stdio.h>

/*
Author: Giovanni Bethel
Course: Programming 01
Summary: this program is practice for command line arguments
Input: stdin
Output:stout
*/

int main(int argc,char*argv[]){
   int num1,num2,ans;
      if(argc==1){
	printf("Enter first number:");
	scanf("%d",& num1);
	printf("Enter second number:");
	scanf("%d",& num2);
      }
      if(argc==2){
	sscanf(argv[1],"%d",& num1);
	printf("Enter second number:");
	scanf("%d",& num2);
      }
      if(argc==3){
	sscanf(argv[1],"%d",& num1);
	sscanf(argv[2],"%d",& num2);
      }
      if(argc>3){
	printf("!~ERROR~!Must be two(2) numbers.\n");
	printf("Enter first number:");
	scanf("%d",& num1);
	printf("Enter second number:");
	scanf("%d",& num2);
      }
      ans=num1+num2;
      printf("%d+%d=%d\n",num1,num2,ans);
}
