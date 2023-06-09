//Two-dimensional arrays in C
#include <stdio.h>
int main()
{
   int i,j,row,col,r,c;
   printf("Enter the row and column of a matrix A :\t");
   scanf("%d%d",&row,&col);
   printf("Enter the row and column of a matrix B :\t");
   scanf("%d%d",&r,&c);
   int num1[10][10],num2[10][10];
   
   if ((row==r) && (col==c))
   {
      printf("Enter the elements of Matrix A\n");
      for (i = 0; i < row; i++)
      {
         for (j = 0; j <col; j++)
         {
            scanf("%d",&num1[i][j]);
         }
         
      }

      printf("Enter the elements of Matrix B\n");
      for (i = 0; i<row; i++)
      {
         for (j = 0; j<col; j++)
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
      for (i = 0; i < row; i++)
      {
         for (j = 0; j <col; j++)
         {
            printf("%5d",num2[i][j]);
         }
         printf("\n");
         
      }

      printf("Matrix A + Matrix B :\n");
      for (i = 0; i < row; i++)
      {
         for (j = 0; j <col; j++)
         {
            printf("%5d",num1[i][j]+num2[i][j]);
         }
         printf("\n");
      }
      
   }
   
   else
   {
    printf("Plese Check the Order Of the matrix");
   }
}