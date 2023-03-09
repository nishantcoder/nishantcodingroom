//nishant raj 22401
//remarks : lacking confidence 95% accuracy
#include <stdio.h>
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
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
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
    printf("Sprted array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d   ",arr[i]);
    }
}