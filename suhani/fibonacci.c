#include<stdio.h>
int fibonacci(int n)
{
    if(n>1)
    return fibonacci(n-1)+fibonacci(n-2);
    else
    return n;
}
int main()
{
    int n,i;
    printf("enter the no. of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fibonacci (i));
    }
}