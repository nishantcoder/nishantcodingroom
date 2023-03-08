#include<stdio.h>
int main()
{
    int num,rev=0,rem,lock;
    printf("Enter  a num \n");
    scanf("%d",&num);
    lock=num; //equaling the original number equal to a new variable
    do
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10; //at end num will be 0 so we equate the num to lock
    }
    while (num>0);
    //printf("%d\n",rev); reversed number we don't need to print reversed form, but u can check while designing your program
    if (rev==lock)
    printf("number is a Palindrome");
    else
    printf("Not a palindrome");
    
}
