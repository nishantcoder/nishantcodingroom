//Two-dimensional arrays in C
#include <stdio.h>
int main()
{
   int i,j;
   int num1[3][4],num2[3][4];
   int a,b,c,d,e,f,g,h,k;
   printf("Enter the elements of 3X3 array num1\n"); 
   for(i=0; i<3; i++)
   for(j=0; j<3; j++)
   scanf("%d", &num1[i][j]);
   //matrix 2
   printf("Enter the elements of 3X3 array num2\n"); 
   for(i=0; i<3; i++)
   for(j=0; j<3; j++)
   scanf("%d", &num2[i][j]);

   printf("The 3X3 array num1 is\n"); 
   for(i=0; i<3; i++)
    {
      for(j=0; j<3; j++)
      printf("%3d ", num1[i][j]);
      printf("\n");
    }
   printf("The 3X3 array num1 matrix is\n"); 
   for(i=0; i<3; i++)
    {
      for(j=0; j<3; j++)
      printf("%3d ", num2[i][j]);
      printf("\n");
    }
   printf("the product of matrix A and B\n");
   //row1
   a=num1[0][0]*num2[0][0]+num1[0][1]*num2[1][0]+num1[0][2]*num2[2][0];
   b=num1[0][0]*num2[0][1]+num1[0][1]*num2[1][1]+num1[0][2]*num2[2][1];
   c=num1[0][0]*num2[0][2]+num1[0][1]*num2[1][2]+num1[0][2]*num2[2][2];
   //row2
   d=num1[1][0]*num2[0][0]+num1[1][1]*num2[1][0]+num1[1][2]*num2[2][0];
   e=num1[1][0]*num2[0][1]+num1[1][1]*num2[1][1]+num1[1][2]*num2[2][1];
   f=num1[1][0]*num2[0][2]+num1[1][1]*num2[1][2]+num1[1][2]*num2[2][2];
   //row3
   g=num1[2][0]*num2[0][0]+num1[2][1]*num2[1][0]+num1[2][2]*num2[2][0];
   h=num1[2][0]*num2[0][1]+num1[2][1]*num2[1][1]+num1[2][2]*num2[2][1];
   k=num1[2][0]*num2[0][2]+num1[2][1]*num2[1][2]+num1[2][2]*num2[2][2];
   //product of the matrix
   printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d",a,b,c,d,e,f,g,h,k);
   return 0;
}