#include<stdio.h>
#include<string.h>
int strpolindrome(char str[],int start,int end)
{
    if(start>=end)
    return 1;
    if(str[start]!=str[end])
    return 0;
    strpolindrome(str,start+1,end-1);
}
int main()
{
    char str[200];
    int i;
    printf("enter a string:\n");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++);
    int flag=strpolindrome(str,0,i-1);
    if(flag==1)
    printf("polindrone\n");
    else
    printf("not a polindrome\n");

}