#include <iostream>
using namespace std;

int swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int partition(int arr[], int low, int up)
{
    int pivot = arr[low];
    int start = low;
    int end = up;
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(arr[start], arr[end]);
        }
    }
    swap(arr[low],arr[end]);
    return end;
}

int quicksort(int arr[], int low, int up)
{
    if (low < up)
    {
        int lock = partition(arr, low, up);
        quicksort(arr, low, lock - 1);
        quicksort(arr, lock + 1, up);
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

    quicksort(arr, 0, size-1);
    cout << "After Sorting ";
    print(arr, size);

    return 0;
}
/*
Enter the size of array 7
Enter the elements in array 
45
65
1
39
23
9
15
Before Sorting 45 65 1 39 23 9 15 
After Sorting 1 9 15 23 39 45 65
*/