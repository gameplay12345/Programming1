#include <stdio.h>

/*
AUTHOR: Giovanni Bethel
COURSE: Computer programming- Section 01
PROGRAM SUMMARY: This program will take a number and display it
INPUT: stdin
OUTPUT: stdout
*/

int main(void) {
int num1,num2,ans;
printf("Enter a Number:\n");
scanf("%d",& num1);
printf("Enter second Number:\n");
scanf("%d",& num2);
ans=num1/num2;
printf("%d/%d=%d\n",num1,num2,ans);
return 0;
}

