#include <stdio.h>

/*
AUTHOR: Giovanni Bethel
COURSE: Computer programming- Section 01
PROGRAM SUMMARY: This program will add two numbers together
INPUT: stdin
OUTPUT: stdout
*/

int main(void) {

int num1,num2,ans;
printf("Enter First Number:");
scanf("%d",& num1);
printf("Enter Second Number:");
scanf("%d",& num2);
ans=num1+num2;
printf("%d+%d=%d\n",num1,num2,ans);
return 0;
}

