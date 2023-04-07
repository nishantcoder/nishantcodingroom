#include<stdio.h>
int main()
{
    int i,min,n;
    printf("enter the no. of elements in an array\n");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE ELEMENTS OF AN ARRAY\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    min=arr[0];
    int max=0;
    for(i=0;i<n;i++)
    {
      if(arr[i]<min)
      {
        min=arr[i];
      }
      if(arr[i]>max)
      {
        max=arr[i];
      }
    }
    printf("the smallest element in array is %d\n",min);
    printf("the greatest element in array is %d\n",max);

}