#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("demo.txt","r");
    fp2=fopen("demo1.txt","w");
    if(fp1==NULL)
    {
        printf("the file does not exist\n");
        exit(1);
    }
    while ((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }
    printf("successfully copied");
    fclose(fp1);
    fclose(fp2);
    
}