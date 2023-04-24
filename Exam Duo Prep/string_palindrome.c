#include <stdio.h>
int main()
{
    char main_str[100],aux_string[100];
    printf("Enter a string \n...>");
    scanf("%s",main_str);
    printf("The entered string is %s\n",main_str);
    int i,j,count=0,flag=1;//we are supposing string as a palindrome  as flag=1

    for(i=0;main_str[i]!='\0';i++);//length of string 
    int main_str_len=i;

    for ( i = main_str_len-1; i>=0; i--,count++) 
    {
        aux_string[count]=main_str[i]; //entering string in reverse order to the helping string
    }
    aux_string[count]='\0'; //defining string as it is null terminated character array

    for ( i = 0; i < main_str_len; i++)
    {
        if (main_str[i]!=aux_string[i])
        {
            flag=0;
        }
        
    }

    //verifing condition for the string 
    if (flag==1)
    {
        printf("String is a palindrome");
    }

    else
    {
        printf("string is Not a pallindrome");
    }    
}