//relational operators
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value for a and b \n");
    scanf("%d%d",&a,&b);
    if (a<b)
    printf("%d is less than %d .\n",a,b);
    if (a>b)
    printf("%d is graeter than %d .\n",a,b);
    if (a<=b)
    printf("%d is less than or equal to %d \n",a,b);
    if (a>=b)
    printf("%d is greater than or equal to %d .\n",a,b);
    if (a==b)
    printf("%d is equal to %d .\n",a,b);
    if (a!=b)
    printf("%d is not equal to %d .\n",a,b);
    return 0;
}