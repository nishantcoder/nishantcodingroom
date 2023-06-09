#include <stdio.h>
int swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
    int a,b;
    printf("Enter the value for a and b \n");
    scanf("%d%d",&a,&b);
    printf("Before Swapping a = %d , b = %d\n",a,b);
    swap(&a,&b);
    printf("After Swapping a = %d , b = %d",a,b);
}