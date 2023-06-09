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
    char s[100];
    int i;
    printf("Enter a string: ");
    gets(s);
    int len=strlen(s);
    int flag=palindrome(s,0,len-1);
    if (flag==1)
    printf("Plaindrome ");
    else
    printf("Not palinfrome");
    return 0;
}

