#include <stdio.h>
float simple()
{
    float p,r;
    int t;
    printf("Enter the principle value P :\t");
    scanf("%f",&p);
    printf("Enter the rate of interest value R :\t");
    scanf("%f",&r);
    printf("Enter the Time period value T :\t");
    scanf("%d",&t);
    float si=(p*r*t)/100;
    printf("The simple interest is %.2f rupees",si);
}
int main()
{
    simple();
    return 0;
}