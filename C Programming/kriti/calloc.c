#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *ptr;
    ptr = (int *)calloc(5 ,sizeof(int));
    *(ptr+4)=65;
    for (int i = 0; i < 5; i++)
    {
        printf("%4d",*(ptr+i));
    }
    
}