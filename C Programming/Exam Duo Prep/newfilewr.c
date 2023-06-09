#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fp;
   char ch;
   fp=fopen("demo.txt","w");
   if(fp==NULL)
   {
    printf("the file doesn't exists");
    exit(1);
   } 
   printf("enter the contents for the file\n");
   while((ch=getchar())!=EOF)
   {
    fputc(ch,fp);

   }
   fclose(fp);
   printf("successfully inserted\n");
}