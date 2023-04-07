#include<stdio.h>
int main()
{
    int i=0;
    char ch;
    char str[]="suHaNI kuMARi";
    while(str[i]!='\0')
    {
     ch=str[i];
    if(ch>='A'&& ch<='Z')
    {
        str[i]=str[i]+32;
    }
    else if(ch>='a'&& ch<='z')
    {
      str[i]=str[i]-32;  
    }
    i++;
    } 
    printf("the string is %s",str);


}