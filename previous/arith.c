//arithmatic mathematics
#include <stdio.h>
int main()
{
    int a,b;
    float c;
    a=5;
    b=2;
    c=a+b;
    printf("Sum of %d and %d is %.2f \n",a,b,c);
    c=a*b;
    printf("Product of %d and %d is %.2f \n",a,b,c);
    c=a/b;
    printf("Integer division of %d and %d is %.2f \n",a,b,c);
    c=(float)a/b;
    printf("Real division of %d and %d is %.2f \n",a,b,c);
    c=a-b;
    printf("Subtraction of %d and %d is %.2f \n",a,b,c);
    c=a%b;
    printf("Modulus of %d and %d is %.2f \n",a,b,c);
    return 0;
}