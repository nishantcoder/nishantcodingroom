#include <stdio.h>
#include <string.h>
int palindrome(char s[],int start, int end)
{
    if(start>=end)
    {
        return 1;
    }
    if (s[start] != s[end])
    {
        return 0;
    }
    palindrome(s, start + 1, end - 1);
}
int main() 
{
    char main_str[100];
    int i;
    printf("Enter a string: ");
    scanf("%s",main_str);
    int len=strlen(main_str);
    int flag=palindrome(main_str,0,len-1);
    if (flag==1)
    printf("String is Palindrome ");
    else
    printf("string is Not palinfrome");
    return 0;
}

