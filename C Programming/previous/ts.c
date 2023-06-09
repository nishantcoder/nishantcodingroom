/*typecasting filename: ts.c*/
#include <stdio.h>
int main()
{
    int a,b;
    float c;
    a=5;
    b=2;
    c=a/b;
    printf("The value of c is %.2f \n",c);
    c=(float)a/b;
    printf("The value of c is %.2f \n",c);
    return 0;
}