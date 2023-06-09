#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    fp = fopen("suhani.txt", "r");
    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }

    fputc('S', fp);
    fputs("Suhani", fp);
    char ch, str[100];
    while (!feof(fp))
    {
        fgets(str, 5, fp);
        printf("%s", str);
    }
    printf("\n");
    fclose(fp);
}