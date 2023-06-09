#include <stdio.h>
#include <math.h>
int main()
{
    int num,count=0,digit,flag,sum=0,rem,cond;
    printf("Enter a number :\t");
    scanf("%d",&num);
    flag=num; //flag will also tends to zero while separating the digits
    cond=flag; //now here cond will be equal to the original number for condition checking
    while(num!=0) //to count the total number of digits in a given number
    {
        count++;
        digit=num%10;
        num=num/10;
        
    }
    //printf("%d",count);
    do
    {
        rem=flag%10;
        flag=flag/10;
        sum=pow(rem,count)+sum;
    }
    while (flag>0);
    if (cond==sum)
    printf("Armstrong number");
    else
    printf("Not a armstrong number");
}
