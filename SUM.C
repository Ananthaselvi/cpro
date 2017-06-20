#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c,d;
  int res;
  float avr;
  clrscr();
  printf("Enter the first number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  printf("Enter the third number:");
  scanf("%d",&c);
  printf("Enter the fourth number:");
  scanf("%d",&d);
  res=a+b+c+d;
  printf("Sum of four number:%d\n",res);
  avr=res / 4;
  printf("Average=%f\n",avr);
  getch();
  return 0;
}
