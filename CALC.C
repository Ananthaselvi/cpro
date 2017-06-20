#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    float res;
    clrscr();
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    printf("1.ADD\n");
    printf("2.SUB\n");
    printf("3.MUL\n");
    printf("4.DIV\n");
    printf("Enter the choice");
    scanf("%d",&c);
    switch(c)
    {
	case 1:
		res=a+b;
		printf("Result=%d\n",res);
		break;
	case 2:
	       res=a-b;
	       printf("Result=%f\n",res);
	       break;
       case 3:
	       res=a*b;
	       printf("Result=%f\n",res);
	       break;
      case 4:
	       res=a/b;
	       printf("Result=%f",res);
	       break;
      default:
	       printf("invalid case");
	       break;
      }
      getch();
      return 0;
}
