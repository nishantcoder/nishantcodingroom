#include<stdio.h>
int main()
{
    int i,j;
    char str1[100],str2[100];
    printf("enter the two string to be concatenated\n");
    scanf("%s%s",&str1,&str2);
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++,i++)
    {
        str1[i]=str2[j];
    }
    str1[i]='\0';
    printf("the string after concatenation is %s\n",str1);

}