#include <stdio.h>
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int up)
{
    int pivot = arr[low];
    int start = low;
    int end = up;
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[low], &arr[end]);
    return end;
}
int quicksort(int arr[], int low, int up)
{
    if (low < up)
    {
        int lock = partition(arr, low, up);
        quicksort(arr, low, lock - 1);
        quicksort(arr, lock + 1, up);
    }
}
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
    quicksort(arr, 0, n - 1);
    printf("Sorted array is ");
    for (i = 0; i < n; i++)
    {
        printf("%d   ", arr[i]);
    }
    return 0;
}
