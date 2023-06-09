//nishnat raj 22401
//remarks : 98% accuracy
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number :\n");
    scanf("%d",&num);
    int flag=1;
    if (num==0 || num==1)
        flag=1;
    for(i=2;i<num/2;i++) //i=2 since smallest prime si 2 
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }

    if (flag==1)
    {
        printf("prime");
    }
    else
    {
        printf("Not Prime");
    }
}