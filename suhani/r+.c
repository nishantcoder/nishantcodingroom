#include<stdio.h>
#include<stdlib.h>
void main()
{
    
    FILE *fp;
    fp=fopen("suhani.txt","r+");
    if (fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputc('z',fp);
    fputs("suhi",fp);
    fclose(fp);
}