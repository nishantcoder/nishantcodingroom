#include <stdio.h>
int main()
{
    char strng[100];
    int i,count=0;
    printf("Enter a string :\t");
    scanf("%[^\n]s",&strng);
    for (i=0;strng[i]!='\0';++i)
    {
        ++count;
    }
    printf("The length of string is %d",count);
}