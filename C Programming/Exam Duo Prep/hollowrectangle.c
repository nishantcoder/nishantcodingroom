#include <stdio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=4; i++)
    {
        for (j = 1; j <=6; j++)
        {
            if (i==1 || i==4 || j==6 || j==1)
            {
                printf("* ");
            }
            else
            printf("  ");
            
        }
        
       printf("\n");
    }
    
}