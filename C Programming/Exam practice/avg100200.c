//program to sum number from 100 to 200
#include <stdio.h>
int main()
{
    int start=100,i,count=1;
    int *ptr=&start;
    for ( i = *ptr+1; i <= 200; i++,count++)
    {
        *ptr=*ptr+i;
    }
    printf("%d",count);
    printf("The sum of numbers from 100 to 200 is %d\n",*ptr);
    printf("The sum of numbers from 100 to 200 is %d\n",start);
    printf("The average of 100 to 200 is %d",start/count);
}
