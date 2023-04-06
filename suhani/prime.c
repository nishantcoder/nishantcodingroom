#include<stdio.h>
int main()
{
    int n,i,flag=1;
    printf("enter a number\n");
    scanf("%d",&n);
    if(n==0||n==1)
    flag=0;
    /*for(i=2;i<n;i++)*/
    for(i=2;i<=n/2;i++)//there are two approach to reach the  operation//
    {
        if(n%i==0)
        {
        flag=0;
        break;
        }
        
    } 
    if(flag==0)
    printf("%d is not a prime number",n);
    else
    printf("%d is a prime number",n); 
}