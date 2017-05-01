#include <stdio.h>

/*
Author:Giovanni Bethel
Course: Programming 01
Program: This program will sort up to 10000 numbers for the user
Input:
Output:stdout
*/

int randu();
void bubble(int*,int);
void swap(int*,int*);
int main(int argc,char*argv[]){
int x[10000],i,n;
   if(argc==2)
      sscanf(argv[1],"%d",& n);
   else{
      printf("Enter quantity of numbers you wish to generate and sort:");
      scanf("%d",& n);
   }
   while((n<2)||(n>10000)){
      printf("!~ERROR~!Quantity of numbers to sort must range from 2 to 10000.\n");
      printf("Enter quantity of numbers you wish to generate and sort:");
      scanf("%d",& n);
   }
   for(i=0;i<n;i++)
      x[i]=randu();
   bubble(x,n);
   printf("Here are your %d random numbers:\n",n);
   for(i=0;i<n;i++)
      printf("%d ",x[i]);
   printf("\n");
}/*main program*/
int randu(void){
   static int seed=17;
   seed=(25179*seed+13849)%65536;
   return seed;
}
void bubble(int a[],int n){
   int i,j;
   for(i=0;i<n-1;i++)
      for(j=n-1;i<j;j--)
	if(a[j-1]<a[j])
	   swap(&a[j-1],&a[j]);
}
void swap(int*a,int*b){
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
