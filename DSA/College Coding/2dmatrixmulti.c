#include <stdio.h>

int main()
{
    int m=0,n=0,x=0,y=0;
    printf("Enter the size of matrix A\n");
    scanf("%d%d",&m,&n);
    printf("Enter the size of matrix B\n");
    scanf("%d%d",&x,&y);

    if (n==x)
    {
        int matrix1[m][n],matrix2[x][y],result[m][y];
        printf("Enter the %d x %d elements in Matrix A\n",m,n);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d",&matrix1[i][j]);
            } 
        }

        printf("Enter the %d x %d elements in Matrix B\n",x,y);
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                scanf("%d",&matrix2[i][j]);
            } 
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < y; j++)
            {
                result[i][j]=0;
                for (int k = 0; k < x; k++)
                {
                    result[i][j]+=matrix1[i][k]*matrix2[k][j];
                } 
            }
            
        }

        printf(" matrix A is \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d\t",matrix1[i][j]);
            } 
            printf("\n");
        }

        printf("Matrix B is \n");
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                printf("%d\t",matrix2[i][j]);
            } 
            printf("\n");
        }

        printf("Multiplication of matrix A and Matrix B is \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < y; j++)
            {
                printf("%d\t",result[i][j]);
            } 
            printf("\n");
        }
        
        
                
        
    }
    else
    {
        printf("Multiplication is not possible in thia case\n");
    }
    return 0;
}