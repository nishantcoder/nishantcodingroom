#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int count=1;
    char ch;
    fp=fopen("file.txt","r");

    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='\n')
    
              count++;
    }
       fseek(fp,0,SEEK_END);
       printf("the size of file is %d bytes\n",ftell(fp));
       fclose(fp);
        printf("the no. of lines is %d\n",count);
        
    }


