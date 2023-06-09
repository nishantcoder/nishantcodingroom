#include <stdio.h>
int a=98;
int b=89;
void sub()
{
    int min;
    min=a-b;
    printf("The difference is %d \n",min);
}
int main()
{
    sub();
    return 0;
}