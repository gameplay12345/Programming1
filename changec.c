#include <stdio.h>

/*
Author:Giovanni Bethel
Course:Computer Programming-Section 01
Program Summary:This program will calculate the value and amount of change entered into it.
*/

int main(void){
   int h,c,d,n,p,numc;
   float value;

   printf("How many half dollars do you have?\n");
   scanf("%d",& h);
      while(h<0){
	printf("!~ERROR~!\nNumber must be at least 0\n");
	printf("How many half dollars do you have?\n");
	scanf("%d",& h);
      }
   printf("How many quarters do you have?\n");
   scanf("%d",& c);
      while(c<0){
	printf("!~ERROR~!\nNumber must be at least 0\n");
	printf("How many quarters do you have?\n");
	scanf("%d",& c);
      }
   printf("How many dimes do you have?\n");
   scanf("%d",& d);
      while(d<0){
	printf("!~ERROR~!\nNumber must be at least 0\n");
	printf("How many dimes do you have?\n");
	scanf("%d",& d);
      }
   printf("How many nickles do you have?\n");
   scanf("%d",& n);
      while(n<0){
	printf("!~ERROR~!\nNumber must be at least 0\n");
	printf("How many nickles do you have?\n");
	scanf("%d",& n);
      }
   printf("How many pennies do you have?\n");
   scanf("%d",& p);
      while(p<0){
	printf("!~ERROR~!\nNumber must be at least 0\n");
	printf("How many pennies do you have?\n");
	scanf("%d",& p);
      }

   numc=h+c+d+n+p;
   value=(0.50*h)+(0.25*c)+(0.10*d)+(0.05*n)+(0.01*p);

   printf("You entered the following amount of change:\n");
  
   if(h>1){
      printf("%3d half dollars\n",h);
   }
   if(h==1){
      printf("%3d half dollar\n",h);
   }
   if(c>1){
      printf("%3d quarters\n",c);
   }
   if(c==1){
      printf("%3d quarter\n",c);
   }
   if(d>1){
      printf("%3d dimes\n",d);
   }
   if(d==1){
      printf("%3d dime\n",d);
   }
   if(n>1){
      printf("%3d nickles\n",n);
   }
   if(n==1){
      printf("%3d nickle\n",n);
   }
   if(p>1){
      printf("%3d pennies\n",p);
   }
   if(p==1){
      printf("%3d penny\n",p);
   }
   printf("These %d coins add up to $%.2f\n",numc,value);

return 0;
}
