#include <iostream>
using namespace std;

int swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
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
    int arr[size] = {0};
    cout << "Enter the elements in array \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Sorting ";
    print(arr, size);

    bubblesort(arr, size);
    cout << "After Sorting ";
    print(arr, size);

    return 0;
}