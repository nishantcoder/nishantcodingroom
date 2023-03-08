#include <stdio.h>
void  main()
{
    int i,*ptr;
    int sum=0;
    ptr=&sum;
    for(i=1;i<=15;i++)
    {
        *ptr=*ptr+i;
    }
    printf("The sum is  %d",*ptr);
}