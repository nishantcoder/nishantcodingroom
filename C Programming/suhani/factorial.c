#include<stdio.h>

    int factorial(int n)
    {
    if(n>1)
    return n*factorial(n-1);
    else
    return 1;
    }
int main()
{
     int n,fact;
     printf("enter a positive integer:\n");
     scanf("%d",&n);
     fact=factorial(n);
     printf("the factorial of %d is %d",n,fact);

}