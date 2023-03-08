//sumof elements in array using pointer;
#include <stdio.h>
int main()
{
    int *ptr,i,n;
    printf("Enter no of elements for the array \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elemenys in the array ",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elemts are : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d   ",arr[i]);
    }
    int sum=0;
    ptr=arr;
    for ( i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nThe sum of elements is = %d",sum);
}