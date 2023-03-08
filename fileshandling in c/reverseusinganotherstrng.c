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

    printf("The revrsed string is %s ",stg);
}