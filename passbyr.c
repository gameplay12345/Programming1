#include <stdio.h>

/*
Author: Giovanni Bethel
Course: Programming 01
Summary: this program is practice for pass by reference
Input: stdin
Output:stout
*/

void swap(int*,int*);
int main(void){
int x,y;
   x=5;
   y=10;
   swap(&x,&y);
   printf("x is %d,y is %d\n",x,y);
}
void swap(int*a,int*b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
