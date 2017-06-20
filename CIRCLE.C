#include<stdio.h>
#include<conio.h>
int main()
{
     int radius;
     float area,peri;
     clrscr();
     printf("Enter the radius:");
     scanf("%d",&radius);
     area=3.14*radius*radius;
     printf("Area of circle:%f\n",area);
     peri=2*3.14*radius;
     printf("Perimeter of circle:%f\n",peri);
     getch();
     return 0;
}