#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    FILE *fp;
    fp=fopen("suhani.txt","r");
    if (fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fseek(fp,0,SEEK_END);
    printf("the length of file is %d",ftell(fp));
}