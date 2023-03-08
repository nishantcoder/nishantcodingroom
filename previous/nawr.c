#include <stdio.h>
float simple()
{
    float p,r;
    int t;
    printf("Enter the Value for principle, rate and time \n");
    scanf("%f,%f,%d",&p,&r,&t);
    float si=(p*r*t)/100;
    return si;
}
int main()
{
    float sint=simple();
    printf("The SI is %.2f rupee",sint);
}
