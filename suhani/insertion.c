#include<stdio.h>
int main()
{
    int i,j,temp,n,k;
    printf("enter the no. of elements in an array\n...>");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=temp;
        for(k=0;k<n;k++)
        printf("%d  ",arr[k]);
        printf("\n");
    }
    printf("the sorted elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}