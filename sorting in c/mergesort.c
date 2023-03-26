#include <stdio.h>
int printarr(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
int merge(int arr[], int low, int mid, int up)
{
    int i,j,k;
    i=low;
    j=mid+1;
    k=low;
    int B[100];
    while (i<=mid && j<=up)
    {
        if (arr[i]<arr[j])
        {
            B[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            B[k]=arr[j];
            j++;
            k++;
        }
        
        
    }
    while (i<=mid)
    {
        B[k]=arr[i];
        i++;
        k++;
    }
    while (j<=up)
    {
        B[k]=arr[j];
        k++;
        j++;
    }
    for ( int x = low; x <=up; x++)
    {
        arr[x]=B[x];
    }
    

}
int mergesort(int arr[], int low, int up)
{
    if (low < up)
    {
        int mid = (low + up)/2;
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
    printarr(arr,n);
    mergesort(arr, 0, n - 1);
    printarr(arr,n);
    return 0;
}
