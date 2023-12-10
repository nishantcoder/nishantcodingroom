#include <iostream>
using namespace std;

int swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void insertionsort(int arr[], int n)
{
    int temp = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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
    int arr[size] = {0};
    cout << "Enter the elements in array \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Sorting ";
    print(arr, size);

    insertionsort(arr, size);
    cout << "After Sorting ";
    print(arr, size);

    return 0;
}