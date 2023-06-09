//r+ reading and writing, main is reading if file exits 
//then it will open it for reading and writing
//we can modify the contents using file pointer
//by default it starts from start
#include<stdio.h>
#include <stdlib.h>
int main()
{
    char str[1000];
    FILE *fp=NULL;
    fp=fopen("file.txt","r+");
    if (fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    //fputc('z',fp);
    //fputs("Suhani",fp);
    
    printf("%s",fgets(str,10,fp));
    fclose(fp);
}