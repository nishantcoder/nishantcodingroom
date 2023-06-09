#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the no of elemnts in array    ");
    scanf("%d",&n);
    int num[n];
    int *ptr=num;
    printf("Enter the elements for an array :\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",(ptr+i));
    }
    int sum=0;
    for ( i = 0; i < n; i++)
    {
        sum=sum+*(ptr+i);
    }
    

    printf("the Sum of array elements is %d \n",sum);
    printf("the mean of array elements is %d \n",sum/n);
}