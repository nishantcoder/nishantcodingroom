#include <stdio.h>
#include <string.h>
void main()
{
    char holi[] = "WISHING YOU HAPPY HOLI";
    int len = strlen(holi), i, j;
    for (i = 0; i < len; i++)
    {
        for (j = 0; j <=i; j++)
        {
                printf("%c ", holi[i]);
        }
        printf("\n");
    }
}