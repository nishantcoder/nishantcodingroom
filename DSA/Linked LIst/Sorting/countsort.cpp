#include <iostream>
using namespace std;


int countsort(int arr[], int n, int k)
{
    int count[k + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        ++count[arr[i]];
    }

    for (int i = 1; i <= k; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    int aux[n];
    for (int i = n - 1; i >= 0; i--)
    {
        aux[--count[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = aux[i];
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size = 0;

    int arr[] = {0, 1, 0, 2, 4, 5, 0, 1, 2, 3, 5, 7, 2, 1, 3, 5, 3};
    cout << "Before Sorting ";
    size = sizeof(arr) / sizeof(int);
    print(arr, size);

    countsort(arr, size, 7);
    cout << "After Sorting ";
    print(arr, size);

    return 0;
}