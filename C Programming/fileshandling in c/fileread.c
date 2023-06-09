#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[1000],ch;
    int i;
    FILE *fp=NULL;
    fp=fopen("file.txt","r");
    if (fp==NULL)
    {
        printf("Error!");
        exit(1);
    }
    //fgets(str,10,fp);//9 charcter nd 1 for for null
    //printf("%s",str);

    /*while (!feof(fp))//to read the complete file includng new line 
    {
        fgets(str,2,fp);
        printf("%s",str);
    }*/
    /*while (!feof(fp))//also reads the complete file
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }*/
    ch=fgetc(fp);
    printf("%c",ch);//print a first character from file
    fclose(fp);
}