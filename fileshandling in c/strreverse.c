#include <stdio.h>
#include <string.h>
void reverse(char str[],int len) 
{
    if(len>=0)
    {
        printf("%c",str[len]);
        return reverse(str,len-1); 
        
    }
    else
    return;
     
}

int main() 
{
    char s[100];
    int i;
    printf("Enter a string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    //i=strlen(s);
    reverse(s,i);
    return 0;
}

