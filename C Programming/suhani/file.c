#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("suhani.txt","w");
    fputc('S',fp);
    fputs("Suhani",fp);
    int x=4;
    char s='s';
    char str[25]="nishant";
    fprintf(fp,"%d %c %s",x,s,str);
    fclose(fp);
}