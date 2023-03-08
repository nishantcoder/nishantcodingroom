//matrix multiplication
#include <stdio.h>
int main()
{
   int i,j,k,row,col,r,c;
   printf("Enter the row and column of a matrix A :\t");
   scanf("%d%d",&row,&col);
   printf("Enter the row and column of a matrix B :\t");
   scanf("%d%d",&r,&c);
   int num1[row][col],num2[r][c];
   
   if (col==r)
   {
      int result[r][col];
      printf("Enter the elements of Matrix A\n");
      for (i = 0; i < row; i++)
      {
         for (j = 0; j <col; j++)
         {
            scanf("%d",&num1[i][j]);
         }
         
      }

      printf("Enter the elements of Matrix B\n");
      for (i = 0; i<r; i++)
      {
         for (j = 0; j<c; j++)
         {
            scanf("%d",&num2[i][j]);
         }
         
      }

      printf("Matrix A :\n");
      for (i = 0; i < row; i++)
      {
         for (j = 0; j <col; j++)
         {
            printf("%5d",num1[i][j]);
         }
         printf("\n");
         
      }

      printf("Matrix B :\n");
      for (i = 0; i < r; i++)
      {
         for (j = 0; j <c; j++)
         {
            printf("%5d",num2[i][j]);
         }
         printf("\n");
         
      }
      
      for (i = 0; i < r; i++)
      {
         for (j = 0; j <col; j++)
         {
            result[i][j]=0;
            for(k=0;k<col;k++)
            {
               result[i][j]+=num1[i][k]*num2[k][j];
            }
         }
                  
      }

      printf("Matrix A X Matrix B :\n");
      for (i = 0; i < row; i++)
      {
         for (j = 0; j <c; j++)
         {
            printf("%5d",result[i][j]);
         }
         printf("\n");
      }
      
   }
   
   else
   {
    printf("Plese Check the Order Of the matrix");
   }
}