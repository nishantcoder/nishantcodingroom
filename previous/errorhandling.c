#include <stdio.h>
int swapr(int*,int*);
int swapv(int,int);

int main()
{
    int a=10,b=20;
    swapv(a,b);
    printf(" call by value \ta=%d , b=%d\n",a,b);
    swapr(&a,&b);
    printf(" Call by refrence \ta=%d , b=%d",a,b);
}
int swapv(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int swapr(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}