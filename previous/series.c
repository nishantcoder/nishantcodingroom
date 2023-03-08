#include <stdio.h>
int fac(int n)
{
    int i,fact=1;
    for (i = 1; i<=n; i++)
    {
        fact=fact*i;
    } 
    return (fact);
}
int main()
{
    int j,t;
    float sum=0,series,k;
    printf("Enter the number of terms :\t");
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        k=fac(j);
        series=1/k;
        sum=sum+series;
    }
    printf("The sum of the series is %f",sum);
    return 0;
}
