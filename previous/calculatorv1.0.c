#include <stdio.h>
#include <math.h>
int main()
{
    float m,n;
    int opr;
    while (1)
    {
        printf("\nEnter The first number : \n ...>");
        scanf("%f",&m);
        printf("Enter The second number : \n ...>");
        scanf("%f",&n);
        printf("Select the opeations \n1. Addition\n2. Substration\n3. Multiplication\n4. Division\n5.Power\n");
        scanf("%d",&opr);
        switch (opr)
        {
        case 1:
        printf("...> %f + %f = %f",m,n,(m+n));
        break;
        case 2:
        printf("...> %f - %f = %f",m,n,(m-n));
        break;
        case 3:
        printf("...> %f * %f = %f",m,n,(m*n));
        break;
        case 4:
        printf("...> %f / %f = %f",m,n,(m/n));
        break;
        case 5:
        printf("...> %f ^ %f = %f",m,n,pow(m,n));
        break;
        default:
        printf("Wrong Input Entered.");
        }
    }
}