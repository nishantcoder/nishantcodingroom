#include <stdio.h>
#include <math.h>
#include <time.h>
int main()
{
    
    int flag = 0;
    int i = 0;
    int num = 0;

    printf("Enter a number \t");
    scanf("%d", &num);
    clock_t time_start,time_end;
    time_start=clock();
    int sq=sqrt(num);
    for (i = 2; i < sq; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            
        }
    }
    if (flag == 0)
    {
        printf("Its a prime number\n");
    }
    else
    {
        printf("Its not a prime number\n");
    }
    time_end=clock();

    printf("Exection time %f\n",(float)(time_end-time_start)/CLOCKS_PER_SEC);
}
