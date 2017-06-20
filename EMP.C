#include<stdio.h>
#include<conio.h>
int main()
{
   char name[10];
   int empid;
   double sal,income,tax;
   clrscr();
   printf("Enter the employee name:");
   scanf("%s",name);
   printf("Enter the employee id:");
   scanf("%d",&empid);
   printf("Enter the salary:");
   scanf("%lf",&sal);
   tax=sal/8;
   printf("Employee name:%s\n",name);
   printf("Emp id:%d\n",empid);
   printf("Salary:%lf\n",sal);
   printf("Tax:%lf\n",tax);
   income=tax*100;
   printf("Income:%lf\n",income);
   getch();
   return 0;
}