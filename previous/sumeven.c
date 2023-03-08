#include <stdio.h>
int main()
{
    int sum=0,i;
    for(i=2;i<=100;i=i+2)
    {
        sum=sum+i;
    }
    printf("The sum of even numbers from 0 to 100 is %d",sum);
}