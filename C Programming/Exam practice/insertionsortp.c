//nishant raj 22401
//remarks : lacking confidence 95% accuracy
#include <stdio.h>
int main()
{
    printf("Enter n ");
    int n,temp;
    scanf("%d",&n);
    int arr[n];
    int i,j;
    printf("Enter the elemnts of arrray\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        } 
        arr[j+1]=temp;
    }
    printf("Sprted array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d   ",arr[i]);
    }
}