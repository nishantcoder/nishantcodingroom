#include <stdio.h>
#include <string.h>
int main()
{
    char str[200],stg[200];
    printf("Enter a string :\t");
    gets(str);
    int len=strlen(str);
    int index=0,i;
    for (i = len-1; i>=0; i--)
    {
        stg[index]=str[i];
        index++;
    }
    int flag=0;
    for ( i = 0; i < len; i++)
    {
        if (str[i]!=stg[i])
        {
            flag=1;
        }
    }
    if(flag==0)
        printf("Word is a palindrome");
    else
        printf("Word is not a palindromme");
}