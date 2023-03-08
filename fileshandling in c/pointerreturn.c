#include <stdio.h>
int *big(int *a,int *b)
{
    if(*a>*b)
    return a;
    else
    return b;
}
int main()
{
    int a=10,b=15;
    int *p=big(&a,&b);
    printf("%d is grarter",*p);
}