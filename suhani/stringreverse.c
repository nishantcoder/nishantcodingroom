#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int len,j,count=0;
    printf("enter the string to be reversed\n");
    scanf("%s",str1);
    for(len=0;str1[len]!=0;len++);
    for(j=len-1;j>=0;j--)
    {
        str2[count]=str1[j];
        count++;
    }
    printf("the entered string is %s\n",str1);
    printf("the reversed string is %s\n",str2);
    
}