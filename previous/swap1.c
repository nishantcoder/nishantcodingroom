#include <stdio.h>
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
int main()
{
    int a,b;
    printf("Enter the first number :\t");
    scanf("%d",&a);
    printf("Enter the Second number :\t");
    scanf("%d",&b);
    printf("Before Swapping Value of a and b are %d are %d\n",a,b);
    printf("Address Of  c is %p\n",&a);
    printf("Address Of  d is %p\n\n",&b);
    swap(&a,&b);
    printf("After Swapping Value of a and b are %d and %d\n",a,b);
    printf("Address Of  c is %d\n",&a);
    printf("Address Of  d is %d\n",&b);


}