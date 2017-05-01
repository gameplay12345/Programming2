#include <stdio.h>
#include <math.h>

/*
Author: Giovanni Bethel
Course: Computer Programming 02
Summary:This programm will solve quadratic equations
Inpput:stdin
Output:stdout
*/

int main(int argc,char*argv[]){
   int a,b,c;
   if(argc==4){
      sscanf(argv[1],"%d",& a);
      sscanf(argv[2],"%d",& b);
      sscanf(argv[3],"%d",& c);
   }
   else{
      printf("What is a?:");
      scanf("%d",& a);
      printf("What is b?:");
      scanf("%d",& b);
      printf("What is c?:");
      scanf("%d",& c);
   }
   if(a==0){
      if(b!=0)
	solve_linear(b,c);
      else
	printf("!~ERROR~!a and b cannot both be 0!\n");
   }
   else
      solve_quad(a,b,c);
}
