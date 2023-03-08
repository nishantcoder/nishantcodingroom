//Two-dimensional arrays in C
#include <stdio.h>
int main()
{
   int i,j;
   int num1[3][4],num2[3][4];
   printf("Enter the elements of 3X4 array num1\n"); 
   for(i=0; i<3; i++)
   for(j=0; j<4; j++)
   scanf("%d", &num1[i][j]);
   //matrix 2
   printf("Enter the elements of 3X4 array num2\n"); 
   for(i=0; i<3; i++)
   for(j=0; j<4; j++)
   scanf("%d", &num2[i][j]);

   printf("The 3X4 array num1 is\n"); 
   for(i=0; i<3; i++)
    {
      for(j=0; j<4; j++)
      printf("%3d ", num1[i][j]);
      printf("\n");
    }
    printf("The Transpose of matrix A is\n"); 
   for(i=0; i<3; i++)
    {
      for(j=0; j<4; j++)
      {
      printf("%3d ", num1[j][i]);
      }
      printf("\n");
    }
   printf("The 3X4 array num1 matrix is\n"); 
   for(i=0; i<3; i++)
    {
      for(j=0; j<4; j++)
      printf("%3d ", num2[i][j]);
      printf("\n");
    }
   printf("The sum 3X4 array num1 and num2 matrix is\n"); 
   for(i=0; i<3; i++)
    {
      for(j=0; j<4; j++)
      printf("%3d \t",(num1[i][j]+num2[i][j]));
      printf("\n");
    }    
    
   return 0;
}
