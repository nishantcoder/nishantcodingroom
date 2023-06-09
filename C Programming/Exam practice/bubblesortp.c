//nishant raj 22401
//remarks : 100% accuracy achieved 
#include <stdio.h>
int main()
{
    printf("Enter n ");
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,j;
    printf("Enter the elemnts of arrray\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sprted array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d   ",arr[i]);
    }
}