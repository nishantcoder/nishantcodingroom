#include<iostream>
#define N 100
using namespace std;
int arr[N];
int arrsum(int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
       sum+=arr[i]; 
    }

    cout<<"the sum of elements is "<<sum<<endl;
}


void insert(int n)
{
    cout<<"enter the no. of elements"<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
      
}
  int main()
  {
    int size=0;
    cout<<"enter the size of array "<<endl;
    cin>>size;
    insert(size);
    arrsum(size);

  }