#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the values for a and b \n");
    scanf("%d%d",&a,&b);
    if (a!=b)
    printf("%d is not equal to %d",a,b);
    else
    printf("%d is  equal to %d",a,b);
    return 0;
}