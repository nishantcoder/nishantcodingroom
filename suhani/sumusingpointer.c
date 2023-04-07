#include<stdio.h>
int main()
{
    
    int start=100;
    int *ptr=&start;
    int i;
    for(i=*ptr+1;i<=200;i++)
    {
        *ptr=*ptr+i;
    }
    printf("the sum of no. btw 100 to 200 is %d",*ptr);

}