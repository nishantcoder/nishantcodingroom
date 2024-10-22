// Insertion Sort
// 20 October 2024 BPMCE Computer Centre

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void exchange(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int A[],int p,int r){
    int pivot=A[r];
    int i=p-1;
    for (int j = p; j < r; j++)
    {
        if (A[j]<pivot)
        {
            i++;
            exchange(&A[i],&A[j]);            
        }
        
    }
    exchange(&A[i+1],&pivot);
    return i+1;
}
void quicksort(int A[],int p,int r)
{
    if (p<r)
    {
        int q=partition(A,p,r);
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }
    
}

int main()
{
    clock_t time_start,time_end;
    
    
    int n=0,temp=0,j=0;
    printf("Enter the size of the array\t");
    scanf("%d",&n);
    time_start=clock();
    int arr[n];   //0,1,2,...,99
    for (int i = 0; i < n; i++)
    {
        arr[i]=rand();
    }

   quicksort(arr,0,n-1);
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