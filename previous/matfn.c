#include <stdio.h>
int matrix()
{
    int r,c;
    printf("Enter the number of rows and columns for matrix A\n");
    scanf("%d%d",&r,&c);
    int arr[10][10],i,j;
    printf("Enter the %d elements for the matrix A\n",r*c);
    for(i=0;i<r;i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix A :\n");
    for(i=0;i<r;i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Of A:\n ");


    for(i=0;i<c;i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%5d",arr[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    matrix();
}
