#include <stdio.h>
 
 int main(void) {
     int n,sum=0;
     int i=0;
     printf("Enter the integer");
     scanf("%d",&n);
     while(n>0)
     {
     	sum=sum+(n%10);
     	n=n/10;
     	i++;
     
     }
    
     
 	return 0;
 }