#include<stdio.h>
#include <stdlib.h>
int main()
{
    char str[1000];
    FILE *fp;
    if (fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    fp=fopen("file.txt","a");
    int a=10;
    char s[6]="hii";
   // gets(str);
    //fputs(str,fp);
    
    
    //fprintf(fp,"%d %s",a,s);
    fclose(fp);
}