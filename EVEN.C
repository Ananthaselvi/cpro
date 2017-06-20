#include<stdio.h>
#include<conio.h>
int main()
{
     int a,i,n;
     clrscr();
     printf("Enter the number of values to check");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {    printf("Enter the number");
	  scanf("%d",&a);
	  if((a%2)==0)
	  {
	       printf("Given number is even\n");
	  }
	  else
	  {
	      printf("Given number is odd\n");
	  }
     }
     getch();
     return 0;
}


