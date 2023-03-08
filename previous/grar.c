//linear seraching in array
#include <stdio.h>
int main()
{
    int i,search,flag=0,n;
    //int arr[100];
    printf("Enter Your no of elements in an array :\t");
    scanf("%d",&n);
    int arr[n];
    //int arr[n];
    printf("...>");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        printf("...>");
    }
    //main condition starts from here
    for (i = 0; i < n; i++)
    {
        if (arr[i]>flag)
        flag=arr[i];
    }
    printf("\n%d is greater vlaue stored in an array",flag);
    return 0;
}