#include <stdio.h>
int main()
{
    int i,j,k,temp,n;
    printf("Enter total no of elemnt in a list \t");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in a list",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  
    for ( i = 0; i <n; i++)
    {
        for ( j = 0; j <n; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            } 
        }

    }


    printf("median of given 11 numbers is  %d  ",arr[(n+1)/2]);
}