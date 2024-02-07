#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *ptr;
    ptr =(int *)malloc(5*sizeof(int));
    
    printf("enter 5 values\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",(ptr+i));
    }

    for(int i=0; i<5; i++)
    {
        printf("%d  ",*(ptr+i));
    }
    ptr =(int *)malloc(6*sizeof(int));
    printf("%9d",*(ptr+5));

}