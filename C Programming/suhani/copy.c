#include<stdio.h>
int main()
{
    FILE *fps,*fpd;
    char c;
    fps=fopen("suhani.txt","r");
    if(fps==NULL)
    {
        printf("error");
        exit(1);
    }
    fpd= fopen("dosti.txt","w");
    while((c=fgetc(fps))!=EOF)
    {
        fputc(c,fpd);
    }
    fclose(fps);
    fclose(fpd);
    printf("successfully copied");

}
