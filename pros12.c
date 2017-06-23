#include <stdio.h>

int main(void) {
    int a,t[100],s;
    int i=0,j,k;
    printf("Enter the integer");
    scanf("%d",&a);
    while(a>0)
    {
    	t[i]=a%10;
    	a=a/10;
    	i++;
    
    }
   s=i;
    
    for(i=0;i<s;i++)
    {
    	for(j=i+1;j<s;j++)
    	{
    		if(t[i]>t[j])
    		{
    		    k=t[i];
    	    	t[i]=t[j];
    		    t[j]=k;
    		}
    	}
    }
  
     for(i=0;i<2;i++)
    {
    	 printf("%d",t[i]);
    }
    
	return 0;
}
