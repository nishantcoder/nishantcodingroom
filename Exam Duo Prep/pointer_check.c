#include <stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    printf("The address of a is %u\n",&a);
    printf("The address of pointer pointing to a is %u",ptr);
}