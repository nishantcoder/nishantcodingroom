#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fps=NULL,*fpd=NULL;
    char c;
    fps=fopen("studdata.txt","r");
    if (fps==NULL)
    {
        printf("Error");
        exit(1);
    }
    fpd=fopen("copy.txt","w");
    if (fps==NULL)
    {
        printf("Error");
        exit(1);
    }
    while ((c=fgetc(fps))!=EOF)
    {
        fputc(c,fpd);
    }
    fclose(fps);
    fclose(fpd);
    printf("Succesfully copied");

}