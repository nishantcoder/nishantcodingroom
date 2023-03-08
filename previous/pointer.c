#include <stdio.h>
int main()
{
    /*int x=10;
    int *ptr;
    ptr=&x;
    int y=*ptr;
    printf("The value %d is stored at %p\n",y,&ptr);
    printf("The value %d is stored at %p\n",*ptr,&ptr);
    printf("The value %d is stored at %p\n",ptr,&ptr);*/
    int sum=0;
    int *ptr;
    for(int i=1;i<=100;i++)
    {
        ptr=&i;
        sum+=*ptr;
    }
    printf("Sum is %d",sum);
}