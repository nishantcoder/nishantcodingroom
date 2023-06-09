#include<stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    int **dptr=&ptr;
    printf("the value at pointer is %d\n",*ptr);
    printf("the value at double pointer is %d\n",**dptr);

}