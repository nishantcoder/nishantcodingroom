#include <stdio.h>
int main()
{
    int n,i,j,k,temp;
    printf("Enter n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("entred elements are :");
    for ( i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        printf("\npass %d -- ",i+1);
        for ( j = 0; j < n-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            } 
        }
        for(k=0;k<n;k++)
        printf("%d  ",arr[k]);
        printf("\n");
    }
    printf("final \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
}