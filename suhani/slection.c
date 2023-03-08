#include <stdio.h>
int swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
    int i, j, min, swap,k,n;
    printf("enter the no. of elements of array");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of an array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap=arr[i];
        arr[i]=arr[min];
        arr[min]=swap;
        for(k=0;k<n;k++)
        printf("%d  ",arr[k]);
        printf("\n");
    }
    printf("sorted array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}