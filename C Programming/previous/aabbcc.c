#include <stdio.h>
int main()
{
    int i=0,j=3;
    char a[30]={'A','B','C','D','E','F','G','H','I'};
    while (i<4)
    {
       for (j=0;j<10;j++)
       {
        printf("%c ",a[j]);
        if (j==2)
        {
            printf("\n");
        }
        if (j==5)
        {
            printf("\n");
        }
       }
        i=i+1;
        printf("\n");
        
    }
}
