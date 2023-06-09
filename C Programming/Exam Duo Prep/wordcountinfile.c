#include<stdio.h>
#include <stdlib.h>
int main()
{
    
    FILE *fp;
    int count=1;
    char ch;
    fp=fopen("file.txt","r");
    if (fp==NULL)
    {
        printf("error");
        exit(1);
    }

    while((ch=fgetc(fp))!=EOF)
    {
        if(ch==' ')
        count++;
    }
    fclose(fp);
    printf("no. of words is %d",count);
}

