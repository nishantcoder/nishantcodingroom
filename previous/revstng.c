//program to reverse a string without using strrev() function
#include<stdio.h>
#include<string.h>
void main()
{
    int i,n; //index number=i
    char str[20];
    printf("Enter the String to get reversed\n");
    scanf("%[^\n]s",&str);
    n=strlen(str); //length of the string
    printf("\nReversed string is \n");
    for(i=n-1;i>=0;i--) //indexno=length-1
    {
       printf("%c",str[i]);
    }
}
