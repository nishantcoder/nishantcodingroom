#include <stdio.h>
int main()
{
    int num,numrem,sum=0;
    printf("Enter any number :\t");
    scanf("%d",&num);
    do
    {
        numrem=num%10;
        num=num/10;
        sum=sum+numrem;
    }
    while (num!=0);
    printf("The sum of digits of a number Is %d",sum);
    
}