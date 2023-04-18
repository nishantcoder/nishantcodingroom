#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fps=NULL,*fpd=NULL;
    char c;
    fps=fopen("file.txt","r");
    if (fps==NULL)
    {
        printf("Error");
        exit(1);
    }
    fpd=fopen("revsersefile.txt","w");
    if (fps==NULL)
    {
        printf("Error");
        exit(1);
    }
    fseek(fps,0,SEEK_END);
    int i=0;
    int length=ftell(fps);
    while (i<length)
    {
        i++;
        fseek(fps,-i,SEEK_END);
        c=fgetc(fps);
        fputc(c,fpd);
    }
    fclose(fps);
    fclose(fpd);
    printf("Succesfully copied revserselly");

}