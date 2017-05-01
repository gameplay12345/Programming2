#include <stdio.h>
#include <math.h>

/*
AUTHOR: Giovanni Bethel
COURSE: Computer Programming-Section 02
PROGRAM SUMMARY: This program will present a requested increasing square root table to the user
INPUT: stdin
OUTPUT: stdout
*/

int main(int argc,char*argv[]){
   int i,b,e,s;
   if(argc==4){
      sscanf(argv[1],"%d",&b);
      sscanf(argv[2],"%d",&e);
      sscanf(argv[3],"%d",&s);
      if((b<=e)&&(s>0)){
	printf("Number   Square root\n");
	for(i=b;i<=e;i=i+s){
	   if(i<0)
	      printf("%4d     %8.4fi\n",i,sqrt(abs(i)));
	   else
	      printf("%4d     %8.4f\n",i,sqrt(i));
	}
      }
      else
	printf("!~ERROR~!Incorrect amount of table values.\n");
   }
   else
      printf("!~ERROR~!Incorrect amout of table values.\n Good-Bye!\n");
}
