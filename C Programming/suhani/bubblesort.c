#include<stdio.h>
int swap(int*a,int*b)
{
int temp=*a;
*a=*b;
*b=temp;
}
int main()
{
    int n,i,j;
    printf("enter the value of n\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    printf("entered elements are:\n");
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        printf("\n %d ",i+1);
    }
    for(j=0;j<n-1;j++)
    {
       if(arr[j]>arr[j+1]);
       {
        swap(&arr[j],&arr[j+1]);
       } 
    }
    printf("the sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }
}


    
    