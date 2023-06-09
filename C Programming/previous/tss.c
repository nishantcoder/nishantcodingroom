#include <stdio.h>
int main()
{
    char ar[100];
    int i;
    gets(ar);
    for(i=0;ar[i]!='\0';i++);
    printf("%d",i);
}