#include <iostream>
using namespace std;

int getmax(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int countsort(int *,int,int);

int radixsort(int arr[], int n)
{
    int max = getmax(arr, n);
    for (int pos = 1; max / pos > 0; pos = pos * 10)
    {
        countsort(arr, n, pos);
    }
}

int countsort(int arr[], int n, int k)
{
    int count[k + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        ++count[(arr[i] / k) % 10];
    }

    for (int i = 1; i <= k; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    int aux[n];
    for (int i = n - 1; i >= 0; i--)
    {
        aux[--count[((arr[i] / k) % 10)]] = arr[i];
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

    int arr[] = {15,1,321,10,802,002,123,90,109,11};
    cout << "Before Sorting ";
    size = sizeof(arr) / sizeof(int);
    print(arr, size);

    radixsort(arr,size-1);
    cout << "After Sorting ";
    print(arr, size);

    return 0;
}