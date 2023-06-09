#include <stdio.h>
int main()
{
    int i,j;
    long det;
    int matrix[2][2];
    printf("Enter the elements for 2x2 matrix \n");
    for (i=0;i<2;i++)
    for (j=0;j<2;j++)
    scanf("%d",&matrix[i][j]);
    printf("The 2x2 array is \n");
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        printf("%3d",matrix[i][j]);
        printf("\n");
    }
    det=(matrix[0][0]*matrix[1][1])-(matrix[1][0]*matrix[0][1]);
    printf("The determinant of matrix is %ld",det);
    return 0;
}