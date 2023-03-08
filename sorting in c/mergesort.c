#include <stdio.h>
int merge(int arr[], int low, int mid, int up)
{
    int i,j,k;
    int m=mid-low+1;
    int n=up-mid;
    int lower[m],upper[n];
    for (i = 0; i <m ; i++)
    {
        lower[i]=arr[low+1];
    }
    for (j = 0; j <m ; j++)
    {
        upper[j]=arr[mid+1+j];
    }
    
    i = low; 
    j = mid + 1;
    k = low;
    
    while (i <= m && j <= n)
    {
        if (lower[i] <= upper[j])
        {
            arr[k] = lower[i];
            i++;
        }
        else
        {
            arr[k] = upper[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= up)
        {
            lower[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            upper[k] = arr[j];
            i++;
            k++;
        }
    }
    
}
int mergesort(int arr[], int low, int up)
{
    if (low < up)
    {
        int mid = (low + up) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, up);
        merge(arr, low, mid, up);
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
    mergesort(arr, 0, n - 1);
    printf("Sorted array is ");
    for (i = 0; i < n; i++)
    {
        printf("%d   ", arr[i]);
    }
    return 0;
}
