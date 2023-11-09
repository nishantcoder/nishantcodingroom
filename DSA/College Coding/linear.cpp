#include <iostream>
using namespace std;
int linearsearch(int arr[], int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return 1;
        }
        return 0;
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 0, 6, 7, 8, 9, 10};
    cout << "enter the element to be searched" << endl;
    int x;
    cin >> x;
    int found = linearsearch(arr, 10, x);

    if(found)
    {
        cout<<"the element is present"<<endl;
    }

    else
    {
         cout<<"the element is absent"<<endl;
        
    }

    return 0;
}