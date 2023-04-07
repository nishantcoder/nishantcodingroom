#include<stdio.h>
void reverse(char str[],int n)
{

if(n>=0)
{
printf("%c",str[n]);
return reverse(str,n-1);

}
else
return ;
    
}
void main()
{
char str[200];
int i,n;
printf("enter a string\n");
scanf("%s",str);
for(i=0;str[i]!='\0';i++);
printf("the length of string is %d\n",i);
reverse(str,i-1);
}






