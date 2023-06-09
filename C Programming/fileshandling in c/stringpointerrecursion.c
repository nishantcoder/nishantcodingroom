#include <stdio.h>
#include <string.h>
void reverse(char *str,char *rev,int len)
{
    while(len>=0)
    {
        *rev=*str;
        str--;
        rev++;
        len--;    
    }
}
void main()
{
    printf("Enter a string ");
    char str[26],rev[26];
    gets(str);
    int len=strlen(str);
    reverse(&str[len-1],rev,len-1);
    printf("The reversed string is %s",rev);
}