#include<stdio.h>
#include<conio.h>
int main()
{
   float quotient,remainder;
   int a,b;
   clrscr();
   printf("Enter the dividend");
   scanf("%d",&a);
   printf("Enter the divisor");
   scanf("%d",&b);
   quotient=a/b;
   remainder=a%b;
   printf("The Quotient is %f\n",quotient);
   printf("The Remainder is %f\n",remainder);
   getch();
   return 0;
}