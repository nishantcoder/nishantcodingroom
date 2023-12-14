#include <iostream>
using namespace std;

int swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void selectionsort(int arr[], int n)
{
    int min = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        min = i;
        j = i - 1;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
            
        }
        if (min!=i)
        {
            swap(arr[i],arr[min]);
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

    selectionsort(arr, size);
    cout << "After Sorting ";
    print(arr, size);

    return 0;
}