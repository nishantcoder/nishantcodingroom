#include<stdio.h>
#include<stdlib.h>
void main()
{
    
    FILE *fp;
    fp=fopen("suhani.txt","a+");
    if (fp==NULL)
    {
        printf("error");
        exit(1);
    }
    rewind(fp);
    fputs("siwani",fp);
    fclose(fp);
}
