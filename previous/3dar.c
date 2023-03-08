#include <stdio.h>
int main()
{
    int arr[2][2][2],i,j,z;
    printf("Enter the elements for the matrix A\n");
    for(i=0;i<2;i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (z=0;z<2;z++)
            {
                scanf("%d",&arr[i][j][z]);
            }
        }
    }
    printf("Matrix A :\n");
    for(i=0;i<2;i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (z=0;z<2;z++)
            {
                printf("%5d",arr[i][j][z]);
            }
            printf("\n");
        }
        printf("\n");
    }
}