#include <stdio.h>
void main()
{
    char ch;
    FILE *fp;
    fp =fopen("meow.txt","w");
    while((ch=getchar())!=EOF)
    {
        putc(ch,fp);
    }
    fclose(fp);
}