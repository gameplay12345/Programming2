#include <stdio.h>
#include <math.h>

/*
Author: Giovanni Bethel
Course: Computer Programming 02
Summary:This programm will solve quadratic equations
Inpput:stdin
Output:stdout
*/

void solve_linear(int,int);
void solve_quad(int,int,int);
void solve_complex(int,int,int);
void solve_real(int,int,int);
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
	printf("!~ERROR~!a and b cannot both be 0!");
   }
   else
      solve_quad(a,b,c);
}
/*SUB PROGRAMS*/

void solve_linear(int b,int c){
   float x;
   x=-c/(float)b;
   printf("x is %f\n",x);
}

void solve_quad(int a,int b,int c){
   if(b*b-4*a*c<0)
      solve_complex(a,b,c);
   else
      solve_real(a,b,c);
}

void solve_complex(int a,int b,int c){
   int x_real;
   float x_img;
   x_real=-b/(2.0*a);
   x_img=sqrt(abs(b*b-4*a*c))/(2*a);
   printf("%d+%.3fi\n",x_real,x_img);
   printf("%d-%.3fi\n",x_real,x_img);
}

void solve_real(int a,int b,int c){
   float x1,x2;
   x1=(-b+sqrt(b*b-4*a*c))/(2*a);
   x2=(-b-sqrt(b*b-4*a*c))/(2*a);
   printf("%.3f+%.3f\n",x1,x2);
   printf("%.3f-%.3f\n",x1,x2);
}
