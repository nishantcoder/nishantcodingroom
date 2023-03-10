#include <stdio.h>
void main()
{
    char s1[100] = "Hello";
    char s2[] = "world";
    int i, j;
    for (i = 0; s1[i] != '\0'; i++);
    for (j = 0; s2[j] != '\0'; j++, i++)
    {
        s1[i] = s2[j];
    }
    s1[i]='\0';
    printf("%s",s1);
}