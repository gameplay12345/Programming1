#include <stdio.h>
#define MAX 10

int randu();
int main(void){
   int x[MAX],i;
   for(i=0;i<MAX;i++)
      x[i]=randu();
   printf("Here are your %d random numbers.\n",MAX);
   for(i=0;i<MAX;i++)
      printf("%d\n",x[i]);
}
int randu(void){
   static int seed=17;
   seed=(25179*seed+13849)%65536;
   return seed;
}
