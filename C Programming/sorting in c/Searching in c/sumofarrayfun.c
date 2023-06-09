#include <stdio.h>
int sum(int arr[],int n)
{
    int sum=0,i;
    for ( i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n,i;
    printf("Enter the no of elemnts in array    ");
    scanf("%d",&n);
    int num[n];
    printf("Enter the elements for an array :\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("the Sum is %d ",sum(num,n));
}