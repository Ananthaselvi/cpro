#include <stdio.h>

int main()
{
    int a,i,num;
    scanf("%d",&a);
    for(num=1;num<=a;num++)
    {
               int count=0;
    for(i=2;i<=num/2;i++)
    {

        if((num%i)==0)
        {
            count++;
            break; 
            
        }
      
      
    }
    if(count==0 && num!=1)
    {
        printf("%d ",num);
    }
    }
    return 0;
}
