//GCD of two numbers
#include <stdio.h>
int hcf(int a,int b)
{
    if(b!=0)
    return hcf(b,a%b);
    else 
    return a;
}

int main()
{
    int a,b;
    printf("Enter two number to calculate the hcf\n");
    scanf("%d%d",&a,&b);
    if (a>b)
    printf("The Hcf is %d",hcf(a,b));
    else
    printf("The hcf is %d",hcf(b,a));
} 