#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,s;
    printf("Enter the sides of a triangle ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle is %.2f sq units",area);


}