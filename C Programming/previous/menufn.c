#include<stdio.h>
int add()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=a+b;
    printf("%d + %d = %d",a,b,c);
    return (c); 
}
int sub(int a,int b)
{
    int c;
    c=a-b;
    printf("%d - %d = %d",a,b,c);
}
int main()
{
    printf("1. Add\n2. Subtract\nEnter Your Choice");
    int ch;
    scanf("%d",&ch);
    add();
       
    

}