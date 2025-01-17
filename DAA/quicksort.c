// Quick Sort
// 20 October 2024 BPMCE Computer Centre

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void exchange(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int A[], int p, int r) {
    int pivot = A[r];
    int i = p - 1;

    for (int j = p; j < r; j++) {
        if (A[j] < pivot) {
            i++;
            exchange(&A[i], &A[j]);
        }
    }
    exchange(&A[i + 1], &A[r]); // Swap the pivot into the correct position
    return i + 1;
}

void quicksort(int A[], int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        printf("%d -> ",q);
        quicksort(A, p, q - 1);
        quicksort(A, q + 1, r);
    }
}

int main() {
    clock_t time_start, time_end;

    int n = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    time_start = clock();
    quicksort(arr, 0, n - 1);
    time_end = clock();

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Execution time: %lf seconds\n", (double)(time_end - time_start) / CLOCKS_PER_SEC);
    return 0;
}
