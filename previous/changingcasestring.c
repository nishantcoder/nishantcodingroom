#include <stdio.h>
#include <string.h>
int main()
{
    int len=0;
    char ch,str[100]="gOOd mORning";
    while (str[len]!='\0')
    {
        ch=str[len];
        if (ch>='A' && ch<='Z')
        str[len]=str[len]+32;
        else if (ch>='a' && ch<='z')
        str[len]=str[len]-32;
        len++;
    }
    printf("%s",str);
}