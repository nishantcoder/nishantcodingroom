#include <stdio.h>
#include <string.h>
int main()
{
    char strname[30];
    printf("Enter the string \n");
    scanf("%[^\n]s",strname);
    printf("The string is %s \n",strname);
    return 0;
}