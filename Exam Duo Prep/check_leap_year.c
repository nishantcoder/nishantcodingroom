#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year to check whether it is leap or not\n...>");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("Year is a leap year");
    }
    else
    {
        printf("Year is not leap year");
    }
    
}