#include <stdio.h>
int main()
{

    int i,search,flag=0,n;

    //int arr[100];

    printf("Enter Your no of elements in an array :\t");

    scanf("%d",&n);

    int arr[n];
    int *ptr=arr;
    //int arr[n];
    for (i=0;i<n;i++)
    {
        printf("...>");
        scanf("%d",&arr[i]);
    }

    //main condition starts from here

    for (i = 0; i < n; i++)
    {

        if (*(ptr+i)>flag)
        flag=*(ptr+i);

    }

    printf("\n%d is greater vlaue stored in an array",flag);

    return 0;

}