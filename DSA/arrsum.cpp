#include <iostream>
using namespace std;
#define max 100

class sum
{
    int sum=0;
    int arr[max];
    int len=0;

    public:
        void insert(int size)           //to insert data items to an array
        {
            len=size;
            for (int i = 0; i < size; i++)
            {
                cin>>arr[i];
            }
            
        }

        void arrsum(void)           //to sum the array elements
        {
            for (int i = 0; i < len; i++)
            {
                sum+=arr[i];
            }
            
        }

        void printsum(void)             //to print sum of array elements
        {
            cout<<"The Sum of Array Elements is "<<sum<<endl;
        }
};

int main()
{
    int n=0;
    sum array;
    cout<<"Enter size of an array"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements to an array"<<endl;
    array.insert(n);
    array.arrsum();
    array.printsum();

    return 0;
}

/*
Enter size of an array
5
Enter 5 elements to an array
1
2
3
4
5
The Sum of Array Elements is 15
*/