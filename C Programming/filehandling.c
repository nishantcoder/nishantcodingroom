#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[1000];
    int i;
    FILE *fp=NULL;
    fp=fopen("file1.txt","w");
    if (fp==NULL)
    {
        printf("Error!");
        exit(1);
    }
    //printf("Enter A string");
    //gets(str);
    //scanf("%d",&i);
    
    i=20;
    fputc('A',fp);
    
    //fprintf(fp,"%d %s",i,str);
    fclose(fp);
}