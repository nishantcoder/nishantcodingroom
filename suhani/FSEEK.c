#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    FILE *fp;
    fp=fopen("suhani.txt","r");
    if (fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fseek(fp,6,SEEK_SET);
    printf("%c",fgetc(fp));
    fseek(fp,3,SEEK_CUR);
    printf("%c",fgetc(fp));
    fclose(fp);
}