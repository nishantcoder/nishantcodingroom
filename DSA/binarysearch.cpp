#include <iostream>
using namespace std;
#define max 100

class binary
{
    int size=0;
    int arr[max];

    void swap(int &a,int &b)
    {
        int t=a;
        a=b;
        b=t;
    }

    void sort()
    {
        int i=0,j=0;
        for ( i = 0; i < size-1; i++)
        {
            for ( j = 0; j < size-1; j++)
            {
                if (arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                }
                
            }
            
        }
        
    }

    public:
        void insert(int n)
        {
            size=n;
            cout<<"Enter "<<size<<" elements for an array"<<endl;
            for (int i = 0; i < size; i++)
            {
                cin>>arr[i];
            }   
            sort();
        }


        int bin_search(int search)
        {
            int low=0,up=size-1;
            while (low<=up)
            {
                int mid=(low+up)/2;
                if (arr[mid]==search)
                {
                    return mid;
                }
                
                if (arr[mid]<search)
                    low=mid+1;

                else
                    up=mid-1;  
            }
            return -1;
        }

        void print()
        {
            for (int i = 0; i < size; i++)
            {
                cout<<arr[i]<<" ";
            }   
            cout<<endl;
        }
};


int main()
{
    int n=0;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    binary binobj;
    binobj.insert(n);
    binobj.print();

    int sear=0;
    cout<<"Enter Element to be searched"<<endl;
    cin>>sear;
    
    int found=binobj.bin_search(sear);

    if (found==-1)
    {
        cout<<"Search Not found!"<<endl;
    }
    else
    {
        cout<<"Search Found."<<endl;
    }
    
    return 0;
}


/*
OUTPUT
Enter the size of an array
6
Enter 6 elements for an array
21
76
8
3
11
2
2 3 8 11 21 76 
Enter Element to be searched
21
Search Found.
*/