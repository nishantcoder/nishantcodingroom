#include <stdio.h>
int sumd(int a)
{
    int rem,sum=0;

    while (a!=0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    return sum;
}
int main()
{
    int i,d,flag=0;
    for(i=10;i<100;i++)
    {
        d=sumd(i);
        if (d%9==0)
        {
            printf("%d ",i);
        }
        
    }
}    
