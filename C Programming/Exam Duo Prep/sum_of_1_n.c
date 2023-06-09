#include <stdio.h>
int sum(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int num;
    printf("for the series 1+2+3+4+...+n\t Enter the value for n\n...>");
    scanf("%d",&num);
    printf("The sum of  the series  till %d term is %d",num,sum(num));
}