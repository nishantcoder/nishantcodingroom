#include <stdio.h>
#include <string.h>
void main()
{
    char str[100]="GOOD MORNING SUHBHANGI";
    int len=strlen(str);
    for (int i=1;i<=len;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c  ",str[j]);
        }
        printf("\n");
    }
    for (int i=len-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c  ",str[j]);
        }
        printf("\n");
    }
}