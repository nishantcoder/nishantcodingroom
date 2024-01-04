#include <stdio.h>

int F(int a,int b)
{
    if(a<b)
    return 0;
    if(b<=a)
    return F(a-b,b)+1;
}

int main()
{
    printf("The value F(2,3) is %d\n",F(2,3));
    printf("The value F(14,3) is %d\n",F(14,3));
    
}

/*
OUTPUT
The value F(2,3) is 0
The value F(14,3) is 4

*/