#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int count=1;
    char ch;
    fp=fopen("demo.txt","r");
    if(fp=NULL)
    {
        printf("error");
        exit(1);
    }
    while((ch=fgetc(fp)!=EOF))
    {
       if(ch='\n')
       count++; 
    }
    fclose(fp);
    printf("no.of lines is %d",count);
    }