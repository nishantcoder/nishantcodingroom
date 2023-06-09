#include <stdio.h>
int fun(int a)
{
    a=a+10;
    printf("The call is %d ",a);
}
int main()
{
    int a=10;
    fun(a);
    printf("The value of main is %d ",a);
}
