#include <stdio.h>
int main()
{
    int n,j;
    printf("Enter the no of elements in a array :\t");
    scanf("%d",&n);
    int arr[n],i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (j=1;j<=n;j++)
    {
        
        if (arr[j-1]!=j)

        {
            printf("the missing number is %d\n",j);
        }
    }
}