#include <stdio.h>

int main() 
{
    int n=2,i;
    printf("2  ");
    while (n<=100)
    {
        for (i = 2; i <= n / 2; i++)//since prime starts from 2
        {
            if (n % i == 0)//not a prime
            {
                break;
            }  
        }
        if (n%i!=0)//if condition gets true the only prime number will  be printed
        printf("%d  ",n);
        n++;
    }
  return 0;
}