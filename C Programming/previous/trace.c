//Two-dimensional arrays in C
#include <stdio.h>
int main()
{
   int i,j,row,col,trace=0;
   printf("Enter the row and column of a matrix A :\t");
   scanf("%d%d",&row,&col);
   int num1[row][col];
   
   if (row==col)
   {
      printf("Enter the elements of Matrix A\n");
      for (i = 0; i < row; i++)
      {
         for (j = 0; j <col; j++)
         {
            scanf("%d",&num1[i][j]);
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
         
      

      for (i = 0; i < row; i++)
      {
         trace=trace+num1[i][i];
      }
      printf("The Trace of the matrix A is %d",trace);  
   }
   
   else
   {
    printf("Plese Check the Order Of the matrix");
   }
}