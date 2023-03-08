#include <stdio.h>
int main()
{
    int x,a,b;
    while (1)
    {
    printf("Enter the input for Instructions. \n");
    printf("Press 1 for Addition . \n");
    printf("Press 2 for Subtraction. \n");
    printf("Press 3 For Multiplication. \n");
    printf("Press 4 for Division. \n");
    printf("Press 5 for Getting the remainder or Modulus. \n");
    scanf("%d",&x);
    printf("Enter the number 1 :  \n");
    scanf("%d",&a);
    printf("Enter the number 2 :  \n");
    scanf("%d",&b);
    switch (x)
    {
        case 1:
        printf("%d + %d = %d \n",a,b,a+b);
        break;
        case 2:
        printf("%d - %d = %d \n",a,b,a-b);
        break;
        case 3:
        printf("%d * %d = %d \n",a,b,a*b);
        break;
        case 4:
        printf("%d / %d = %d \n",a,b,a/b);
        break;
        case 5:
        printf("%d mod %d = %d \n",a,b,a%b);
        break;
        default:
        printf("Invalid Input \n");
    }
    printf("                  *****                   \n");
    }
    return 0;
}