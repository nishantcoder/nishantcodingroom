#include <stdio.h>

int main() 
{
    int n=2, i;
    printf("2  ");
    while (n<=100)
    {
        for (i = 2; i <= n / 2; i++)
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
 
  return 0;
}