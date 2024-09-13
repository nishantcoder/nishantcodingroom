#include <stdio.h>
#include <math.h>
int main()
{
    int n = 2;
    int i=0;
    printf("2  ");
    while (n<=100)
    {
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                break;
            }  
        }
        if (n%i!=0)
        printf("%d  ",n);
        n++;
    }

}
