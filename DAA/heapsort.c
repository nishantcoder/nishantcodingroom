#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int maxheapify(int arr[], int n, int i)
{
    int largest=i;
    int left=(2*i);
    int right=(2*i)+1;
    while (left<=n && arr[left]>arr[largest])
    {
        largest=left;
    }

    while (right<=n && arr[right]>arr[largest])
    {
        largest=right;
    }

    if (largest!=i)
    {
        swap(&arr[largest],&arr[i]);
        maxheapify(arr,n,largest);
    }
}

int heapsort(int arr[], int n)
{
    
    for (int i = n/2; i >=1; i--)//build max heap
    {
        maxheapify(arr,n,i);
    }

    for (int  i = n; i >=1; i--)
    {
        swap(&arr[1],&arr[i]);
        maxheapify(arr,n,1);
    }
    
    
}



int main()
{
    clock_t time_start,time_end;
    
    
    int n=0,temp=0,j=0;
    printf("Enter the size of the array\t");
    scanf("%d",&n);
    
    int arr[n];   //0,1,2,...,99
    for (int i = 1; i < n; i++)
    {
        arr[i]=rand();
    }
    time_start=clock();
   heapsort(arr,n);
    time_end=clock();
 /* for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");*/
    printf("Exection time %lf\n",(double)(time_end-time_start)/CLOCKS_PER_SEC);  
    return 0;
}