#include<stdio.h>
int main()
{
    int i,j,n,search;
    printf("enter the no. of elements to be entered in an array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    int flag=0;
    printf("\nenter the no. to be searched\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
          flag=1;
          break;  
        }
        
    }
    if(flag==1)
    {
        printf("search successfull\n");

    }
    else
    printf("search unsuccessfull\n");
     
}