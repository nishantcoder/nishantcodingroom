#include <stdio.h>
int main()
{
    FILE *f;
    char c;
    f = fopen("TEST.txt","r");
    if (f==NULL)
    printf("File doesn't exist\n");
    else
    {
        while (c != EOF)
        {
            c = getc(f);
            putchar(c);
        }
    fclose(f);
    }
    return 0;

}