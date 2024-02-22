#include <iostream>
using namespace std;
void print(int arr[],int n);
int swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int maxheapify(int arr[], int n, int i)
{
    int largest=i;
    int leaf=(2*i);
    int root=(2*i)+1;
    while (leaf<=n && arr[leaf]>arr[largest])
    {
        largest=leaf;
    }

    while (root<=n && arr[root]>arr[largest])
    {
        largest=root;
    }

    if (largest!=i)
    {
        swap(arr[largest],arr[i]);
        maxheapify(arr,n,largest);
    }
}

void buildheap(int arr[],int n)
{
    /*here i am using maxheap, that means it will sort in desceding order*/
    for (int i = n/2; i >=1; i--)//build max heap
    {
        maxheapify(arr,n,i);
        
    }
}

int heapsort(int arr[], int n)
{
    
    //buildheap(arr,n);
    for (int  i = n; i >=1; i--)
    {
        swap(arr[1],arr[i]);
        maxheapify(arr,n,1);
    }
    
    
}

void print(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
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
    int arr[100];
    cout << "Enter the elements in array \n";
    for (int i = 1; i <= size; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Sorting ";
    print(arr, size);

    heapsort(arr,size);
    cout << "After Sorting ";
    print(arr, size);

    return 0;
}