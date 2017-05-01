#include <stdio.h>
#define MAX 10

int main(void){
   int x[MAX],i;
      printf("Enter %d Numbers:\n",MAX);
      for(i=0;i<MAX;i++)
	scanf("%d",& x[i]);
      printf("Here are your %d Numbers:\n",MAX);
      for(i=0;i<MAX;i++)
	printf("%d\n",x[i]);
}
