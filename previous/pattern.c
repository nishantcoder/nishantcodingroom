#include <stdio.h>
int main()
{
    int i,j;
    for (i=1;i<10;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i=1;i<1;i++)
    {
        for (j=10;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
   /* for (i=0;i<4;i++)
    {
        for (j=1;j<i;j++)
        {
            if (j%2!=0)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }*/
}