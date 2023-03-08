/*Write a program that takes marks of three students as input.\n 
Compare the marks to see which student has scored the highest.\n Check also if two or more students have scored equal marks.\n*/
#include <stdio.h>
int main()
{
   int a,b,c;
   printf("Enter the marks of three students a,b,c : \n");
   scanf("%d%d%d",&a,&b,&c);
   if (a>b)
   printf(" Student A scored highest marks.\n");
   else if (b>c)
   printf(" Student B scored highest marks.\n");
   else if (c>a)
   printf(" Student C scored highest marks.\n");
   if ((a==b) && (b==c) && (a==b))
   printf("Everyone has scored equal marks");
   else if (a==b)
   printf(" Student A and B has scored equal marks.\n");
   else if (b==c)
   printf(" Student B and C has scored equal marks.\n");
   else if (a==c)
   printf(" Student A and C has scored equal marks.\n");
   return 0;
}