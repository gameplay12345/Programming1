#include <stdio.h>
#define Pi 3.14

/*
AUTHOR:Giovanni Bethel
COURSE:Computer Programming-Seaction 01
PROGRAM SUMMARY:This program will allow the user to carry out three basic math problems
INPUT: stdin
OUTPUT: stdout
*/

int menu(void);
int main(void){
   int selection,r,a,l,w,p;
   float c;
   printf("Giovanni Bethel\n");
   selection=menu();
   while (selection!=4){
      switch(selection){
	case 1:printf("Enter radius of the circle:");
	       scanf("%d",& r);
	       if(r<=0){
		 printf("!~ERROR~!Radius must be a positive number!\n");
	       }
	       else{
		 c=2*Pi*r;
		 printf("The Circumfrance of a circle with the radius %d is %.2f\n",r,c);
	       }
	       break;
	case 2:printf("Enter length of the rectangle:");
	       scanf("%d",& l);
	       while(l<=0){
		 printf("!~ERROR~!Length must be a positive number!\n");
		 printf("Enter length of the rectangle:");
		 scanf("%d",& l);
	       }
	       printf("Enter width of the rectangle:");
	       scanf("%d",& w);
	       while(w<=0){
		 printf("!~ERROR~!Width must be a positive number!\n");
		 printf("Enter width of the rectangle:");
		 scanf("%d",& w);
	       }
	       a=l*w;
	       printf("The area of a rectangle with a length of %d and a width of %d is %d\n",l,w,a);
	       break;
	case 3:printf("Enter length of the rectangle:");
	       scanf("%d",& l);
	       while(l<=0){
		 printf("!~ERROR~!Length must be a positive number!\n");
		 printf("Enter length of the rectangle:");
		 scanf("%d",& l);
	       }
	       printf("Enter width of the rectangle:");
	       scanf("%d",& w);
	       while(w<=0){
		 printf("!~ERROR~!Width must be a positive number!\n");
		 printf("Enter width of the rectangle:");
		 scanf("%d",& w);
	       }
	       p=2*l+2*w;
	       printf("The perimeter of a rectangle with a length of %d and a width of %d is %d\n",l,w,p);
	       break;
	default:printf("%d is not a valid selection.\nPlease select again.\n",selection);
      }/*switch*/
      selection=menu();
   }/*while loop*/
   printf("Midterm Complete!\n");
}
int menu(void){
   int choice;
      printf("Options are:\n");
      printf("1 Circumference of a Circle\n");
      printf("2 Area of a Rectangle\n");
      printf("3 Perimeter of a Rectangle\n");
      printf("4 Quit\n");
      printf("Enter Selection:");
      scanf("%d",& choice);
      return choice;
}

