#include <stdio.h>

/*
Author: Giovanni Bethel
Course: Programming 1
Program: Just a random while loop
Input: stdin
Output: stdout
*/

int main(void){
   int count,sum;
   count=5;
   sum=0;
   while(count>=0){
      sum=sum+count;
      count--;
   }
   printf("Sum is %d\n",sum);
   printf("Count is %d\n",count);
return 0;
} 
