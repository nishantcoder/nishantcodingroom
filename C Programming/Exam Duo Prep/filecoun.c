#include<stdio.h>
int main()
{
    FILE *fp;
    int count=1;
    fp=fopen("demo.txt","r");
    char ch;
    while((ch=fgetc(fp))!=EOF);
    {
        if(ch== '\n');
        count++;
    }
    printf("no.of lines in file is %d",count);
    fclose(fp);
}