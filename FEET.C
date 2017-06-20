#include<stdio.h>
#include<conio.h>
int main()
{
    float feet,inches;
    clrscr();
    printf("Enter the feet");
    scanf("%f",&feet);
    inches=feet *12;
    printf("Inches=%f\n",inches);
    getch();
    return 0;
}