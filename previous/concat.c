#include<stdio.h>
#include"string.h"
void main(void)
{
  char str1[25],str2[25];
  int i=0,j=0;
  printf("\nEnter First String:");
  scanf("%s",&str1);
  printf("\nEnter Second String:");
  scanf("%s",&str2);
  while(str1[i]!='\0')

  i++;
  while(str2[j]!='\0')
  {
    str1[i]=str2[j];
    j++;
    i++;
  }
  str1[i]='\0';
  printf("\nConcatenated String is %s",str1);
}
