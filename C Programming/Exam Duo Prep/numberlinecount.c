#include <stdio.h>
int main()
{
    int lines=0;
    char ch;
    printf("Enter a line \n");
    while((ch=getchar())!=EOF)
    {
        if (ch=='\n')
        {
            lines++;
        }
    }
    printf("The Number of lines is : %d\n",lines);
    return 0;
}