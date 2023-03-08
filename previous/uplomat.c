//Two-dimensional arrays in C
#include <stdio.h>
int main()
{
   int i,j,row,col,lsum=0,usum=0;
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
         for (j = 0; j < col; j++)
         {
            if (i<j)
            usum=usum+num1[i][j];
            if (i>j)
            lsum=lsum+num1[i][j];
         }
         
      }
      printf("The Sum Of Upper Diagonal of the matrix A is %d\n",usum);
      printf("The Sum of Lower Diagonal of the matrix A is %d\n",lsum);
   }
   
   else
   {
    printf("Plese Check the Order Of the matrix");
   }
}