#include <stdio.h>

int main()
{

    int i, search, n;

    // int arr[100];

    printf("Enter Your no of elements in an array :\t");

    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;
    // int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("...>");
        scanf("%d", &arr[i]);
    }

    // main condition starts from here
    int min = *ptr;
    for (i = 0; i < n; i++)
    {

        if (*(ptr + i) < min)
            min = *(ptr + i);
    }

    printf("\n%d is smallest vlaue stored in an array", min);

    return 0;
}