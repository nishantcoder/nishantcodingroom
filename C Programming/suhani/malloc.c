#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("no. of elements");
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));
    printf("enter the ements in an array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",(ptr+i));
        
    }
    
    printf("elements are:\n");
    for (i = 0; i <n; i++)
    {
        printf("%d  ",*(ptr+i));
    }
    
}