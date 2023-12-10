#include <iostream>
using namespace std;

int swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int shellsort(int arr[], int n)
{
    for (int gap = n / 2; gap >= 1; gap = gap / 2)
    {
        for (int j = gap; j < n; j++)
        {
            for (int i = j - gap; i >= 0; i = i - gap)
            {
                if (arr[i + gap] > arr[i])
                {
                    break;
                }
                else
                {
                    swap(arr[i + gap], arr[i]);
                }
            }
        }
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

    shellsort(arr, size);
    cout << "After Sorting ";
    print(arr, size);

    return 0;
}