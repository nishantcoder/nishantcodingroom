#include <stdio.h>
int main()
{
    int i,sum=0,f=1;

      for(i=1;i<=10;i++)
    {
        sum=sum+(i/(i*f));
    }
    printf("%d",sum);
}