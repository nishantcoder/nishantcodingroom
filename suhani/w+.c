#include<stdio.h>
#include<stdlib.h>
void main()
{
    
    FILE *fp;
    fp=fopen("suhani.txt","w+");
    if (fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputs("meow",fp);
    fclose(fp);
}