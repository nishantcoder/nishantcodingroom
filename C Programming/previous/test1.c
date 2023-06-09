#include <stdio.h>

int func(int num)
{
    int count=0;
    while (num)
    {
        count++;
        num>>=1;
    }
    return (count);        
}
int main()
{
    int r=func(435);
    printf("%d",r);
}