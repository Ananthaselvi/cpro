#include<stdio.h>
#include<conio.h>
int main()
{
   int a,i,sum=0;
 
   clrscr();
   for(i=0;i<4;i++)
   {    printf("Enter the number:");
	scanf("%d",&a);
	sum=sum+a;
   }
   printf("sum=%d\n",sum);
  
   getch();
   return 0;
}

