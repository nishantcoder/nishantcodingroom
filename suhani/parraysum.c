#include<stdio.h>
int main()
{
    int i,sum=0,n;
    float mean;
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
    printf("the sum of all elements in an array is %d\n",sum);
    mean=sum/n;
    printf("the mean of elements is %.2f\n",mean);
    return 0;
}


            