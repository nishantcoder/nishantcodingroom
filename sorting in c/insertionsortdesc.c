#include <stdio.h>
int main()
{
    int i, n, j, temp;
    printf("Enter Your no of elements in an array :\t");

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("...>");
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    printf("Sorted array is ");
    for (i = 0; i < n; i++)
    {
        printf("%d   ", arr[i]);
    }
    return 0;
}
