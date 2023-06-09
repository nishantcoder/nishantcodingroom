#include <stdio.h>
int fibbonacci(int); //function declaration
//we can declare a function any number of times 
int fibbonacci(int n)//function definition
{
    if (n>1)
    return fibbonacci(n-1)+fibbonacci(n-2);
    else
    return n;
}
int main()
{
    printf("Enter a number \t");
    int N,i;
    scanf("%d",&N);
    printf("Fibbonacci series till %d are\n",N);
    for(i=0;i<N;i++)
    printf(" %d",fibbonacci(i));
}