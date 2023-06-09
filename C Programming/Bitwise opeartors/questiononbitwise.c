#include <stdio.h>
int main()
{
    int a=10; //
    int b=7;
    printf("%d\n",a&b);
    printf("%d\n",a|b);
    printf("%d\n",a^b);
    printf("%d\n",a&b && b+1 || 0 || b++);
    printf("%d",b);
}