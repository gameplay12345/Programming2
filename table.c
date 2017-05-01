#include <stdio.h>

/*
Author: Giovanni Bethel
Course: Computer Programming 02
Summary:This programm allows the user to make and see a multiplication table
Inpput:stdin
Output:stdout
*/

int main(int argc,char*argv[]){
   int n,inc,row,col;
   if(argc==3){
      sscanf(argv[1],"%d",& n);
      sscanf(argv[2],"%d",& inc);
   }
   else{
      printf("What is the starting value?:");
      scanf("%d",& n);
      printf("What increment do you want to change by?:");
      scanf("%d",& inc);
   }
   while((n<0)||(n>10)){
      printf("!~ERROR~!Starting value must be less than or equal to 10 and greater than 0!\n");
      printf("What is the starting value?:");
      scanf("%d",& n);
   }
   while(inc<=0){
      printf("!~ERROR~!Increment must be positive!\n");
      printf("What increment do you want to change by?:");
      scanf("%d",& inc);
   }
   printf("     ");
   for(col=-n;col<=n;col=col+inc)
      printf("%4d ",col);
      printf("\n");
   for(row=-n;row<=n;row=row+inc){
      printf("%4d ",row);
      for(col=-n;col<=n;col=col+inc)
	printf("%4d ",col*row);
      printf("\n");
   }
}
   
