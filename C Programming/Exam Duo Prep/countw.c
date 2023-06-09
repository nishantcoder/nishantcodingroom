#include<stdio.h>
int main()
{
    int lines=0;
    char ch;
    printf("enter a line\n");
    while((ch=getchar())!=EOF)
    {
        if(ch=='\n')
        {
            lines++;
        }
    }
        printf("the no. of lines is %d\n",lines);
        
    }
