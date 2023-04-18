//program to sum number from 100 to 200
#include <stdio.h>
int main()
{
    int start=100,i;
    int *ptr=&start;
    for ( i = *ptr+1; i <= 200; i++)
    {
        *ptr=*ptr+i;
    }
    printf("The sum of numbers from 100 to 200 is %d\n",*ptr);
    printf("The sum of numbers from 100 to 200 is %d",start);
}