#include<stdio.h>
int main()
{
    int i,sum=0,n;
    int *ptr;
    printf("enter the no. of elements of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of an array\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    ptr=arr;
    for(i=0;i<n;i++)
    {
        
        sum=sum + *(ptr+i);
    }
    printf("the sum of all elements in an array is %d",sum);
    return 0;
}
            