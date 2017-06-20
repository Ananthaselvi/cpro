#include<stdio.h>
#include<conio.h>
int main()
{
   int a,i,sum=0;
   float avr;
   clrscr();
   for(i=0;i<4;i++)
   {    printf("Enter the number:");
	scanf("%d",&a);
	sum=sum+a;
   }
   printf("sum=%d\n",sum);
   avr=sum/4;
   printf("Average=%f\n",avr);
   getch();
   return 0;
}

