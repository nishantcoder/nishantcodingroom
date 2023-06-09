#include <stdio.h>
int main()
{
    FILE *fp;
    char buffer[100];
    fp=fopen("file.txt","r");
    fread(buffer,sizeof(char),50,fp);
    fclose(fp);
    printf("%s\n",buffer);
}