#include<stdio.h>
int fibonacci(int n);
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("the fibnacci of given number\n");
    for(int i=0;i<n;i++){
    printf("%d\n",fibonacci(i));
    }
}
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
     else
     {
    return fibonacci(n-1)+fibonacci(n-2);
    }
}