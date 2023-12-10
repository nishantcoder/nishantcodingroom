#include <iostream>
using namespace std;

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
            k++;
        }
        else
        {
            aux[k] = arr[j];
            j++;
            k++;
        }
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
    cout << "Enter the size of array ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements in array \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Sorting ";
    print(arr, size);

    mergesort(arr, 0, size - 1);
    cout << "After Sorting ";
    print(arr, size);

    return 0;
}