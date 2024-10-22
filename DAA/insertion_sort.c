// Insertion Sort
// 20 September 2024 BPMCE Computer Centre
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
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

    for (int i = 1; i < n; i++)
    {
        temp=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
    }

    time_end=clock();

    printf("Exection time %lf\n",(double)(time_end-time_start)/CLOCKS_PER_SEC);  
    return 0;
}

/*
OUTPUT

*/