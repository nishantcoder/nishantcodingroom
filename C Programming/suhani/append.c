#include<stdio.h>
#include<stdlib.h>
void main()
{
    
    FILE *fp;
    fp=fopen("suhani.txt","a");
    if (fp==NULL)
    {
        printf("error");
        exit(1);
    }
    char str[100];
    printf("Enter a string ");
    gets(str);
    fprintf(fp,"%s\n",str);
    fclose(fp);
    printf("appended successfully");
}