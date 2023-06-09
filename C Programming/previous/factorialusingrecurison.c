#include <stdio.h>
int factorial(int n); //function declaration
//we can declare a function any number of times 
int factorial(int n)//function definition
{
    if (n>1)
    return n*factorial(n-1);
    else
    return 1;
}
int main()
{
    printf("Enter a number \t");
    int N;
    scanf("%d",&N);
    printf("Factorial is %d",factorial(N));
}