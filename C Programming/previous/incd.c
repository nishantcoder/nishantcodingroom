/*increment decreament operators file name incd.c*/
#include <stdio.h>
int main()
{
    int a=1;
    printf("a's value is now %d \n",a++);
    printf("a's value is now %d \n",a);
    a=1;
    printf("a's value is now %d \n",++a);
    printf("a's value is now %d \n",a);
    a=1;
    printf("a's value is now %d \n",a--);
    printf("a's value is now %d \n",a);
    a=1;
    printf("a's value is now %d \n",--a);
    printf("a's value is now %d \n",a);
    return 0;
}