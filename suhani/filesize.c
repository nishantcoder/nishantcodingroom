#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("demo.txt","r");
    fseek(fp,0,SEEK_END);
    printf("the size of file is %d bytes",ftell(fp));
    fclose(fp);
}