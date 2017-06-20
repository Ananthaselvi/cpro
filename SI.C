#include<stdio.h>
#include<conio.h>
int main()
{
   int p,n;
   float r;
   float s;
   printf("Enter the principal:");
   scanf("%d",&p);
   printf("Enter the no of yrs:");
   scanf("%d",&n);
   printf("Enter the rate of interest:");
   scanf("%f",&r);
   s=(p*n*r)/100;
   printf("Simple Interest:%f\n",s);
   getch();
   return 0;
}
