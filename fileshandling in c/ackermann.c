#include<stdio.h>
int Ack(int,int);
int main()
{
    int m,n;
    printf("Enter two numbers :: \n");
    scanf("%d%d",&m,&n);
    printf("\nOUTPUT :: %d\n",Ack(m,n));
}
int Ack(int m, int n)
{
        if(m==0)
            return n+1;
        else if(n==0)
            return Ack(m-1,1);
        else
            return Ack(m-1,Ack(m,n-1));
}