#include <stdio.h>
#include <math.h>

/*
AUTHOR: Giovanni Bethel
COURSE: Computer Programming-Section 01
PROGRAM SUMMARY: This program will present the option to complete basic mathmatical problems
INPUT: stdin
OUTPUT: stdout
*/

int menu(void);
int main(void){
   int selection,num1,num2,ans;
   float num3,num4,fans;
   selection=menu();
   while(selection!=8){
      switch(selection){
	case 1:printf("Enter First Number:");
	       scanf("%d",& num1);
	       printf("Enter Second Number:");
	       scanf("%d",& num2);
	       ans=num1+num2;
	       printf("%d+%d=%d\n",num1,num2,ans);
	       break;
	case 2:printf("Enter First Number:");
	       scanf("%d",& num1);
	       printf("Enter Second Number:");
	       scanf("%d",& num2);
	       ans=num1-num2;
	       printf("%d-%d=%d\n",num1,num2,ans);
	       break;
	case 3:printf("Enter First Number:");
	       scanf("%d",& num1);
	       printf("Enter Second Number:");
	       scanf("%d",& num2);
	       ans=num1*num2;
	       printf("%d*%d=%d\n",num1,num2,ans);
	       break;
	case 4:printf("Enter First Number:");
	       scanf("%d",& num1);
	       printf("Enter Second NUmber:");
	       scanf("%d",& num2);
	       if(num2!=0){
		fans=(float)num1/num2;
		printf("%d/%d=%.2f\n",num1,num2,fans);
	       }
	       else{ 
		printf("!~ERROR~!Cannot Divide by 0.");
	       }
	       break;
	case 5:printf("Enter Number:");
	       scanf("%d",& num1);
	       ans=abs(num1);
	       printf("|%d|=%d\n",num1,ans);
	       break;
	case 6:printf("Enter Number:");
	       scanf("%f",& num3);
	       if(num1<0){
		printf("!~ERROR~!Number cannot be a Negative.");
	       }
	       else{
		fans=sqrt(num3);
		printf("sqrt(%f)=%f\n",num3,fans);
	       }
	       break;
	case 7:printf("Enter First Number:");
	       scanf("%f",& num3);
	       printf("Enter Second Number:");
	       scanf("%f",& num4);
	       if((num3==0)&&(num4<=0)){
		printf("!~ERROR~!Exponent must be greater than 0 if base is 0.");
	       }
	       else{
		fans=pow(num1,num2);
		printf("%f^%f=%f\n",num3,num4,fans);
	       }
	       break;
	default:printf("%d is not a valid selection.\nPlease select again.\n",selection);
       }/*switch*/
       selection=menu();
    }/*while loop*/
   printf("Thank you for using the program,Goodbye!\n");
}
int menu(void){
   int choice;
      printf("Options are:\n");
      printf("1 Add\n");
      printf("2 Subtract\n");
      printf("3 Multiply\n");
      printf("4 Divide\n");
      printf("5 Absolute Value\n");
      printf("6 Square Root\n");
      printf("7 Power\n");
      printf("8 Quit\n");
      printf("Enter Selection:");
      scanf("%d",& choice);
      return choice;
}

