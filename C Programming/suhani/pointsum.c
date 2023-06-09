#include<stdio.h>
int main()
{
    int sum=100,i;
    int *ptr;
    ptr=i;

for(i=101;i<=200;i++)
    {
        
        sum=sum+ *ptr++;
    }
    printf("the sum of elements btw 100 to 200 is %d",sum);
    }