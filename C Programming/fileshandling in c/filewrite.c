#include <stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("abc.txt","w");
    fputc('A',fp);
    fputs("Alex",fp);
    char ch='Z';
    char che[5]="Hello";
    int a =5;
    fprintf(fp," %s %c",che,ch);
    fclose(fp);
}