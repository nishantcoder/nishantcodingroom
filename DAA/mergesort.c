// Merge Sort
// 20 October 2024 BPMCE Computer Centre

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int merge(int arr[], int low, int mid, int up)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int aux[up + 1];
    while (i <= mid && j <= up)
    {
        if (arr[i] < arr[j])
        {
            aux[k] = arr[i];
            i++;
        }
        else
        {
            aux[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= up)
        {
            aux[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            aux[k] = arr[i];
            k++;
            i++;
        }
    }
    for (k = low; k <= up; k++)
    {
        arr[k] = aux[k];
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
    clock_t time_start,time_end;
    
    
    int n=0,temp=0,j=0;
    printf("Enter the size of the array\t");
    scanf("%d",&n);
    
    int arr[n];   //0,1,2,...,99
    for (int i = 0; i < n; i++)
    {
        arr[i]=rand();
    }
    time_start=clock();
   mergesort(arr,0,n-1);
    time_end=clock();
   /* for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");*/
    printf("Exection time %lf\n",(double)(time_end-time_start)/CLOCKS_PER_SEC);  
    return 0;
}

/*
OUTPUT

*/