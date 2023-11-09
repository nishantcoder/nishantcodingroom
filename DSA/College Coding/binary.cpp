#include <iostream>
using namespace std;
int binarysearch(int arr[], int low, int high, int x)
{
    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }

            else 
            {
              high = mid - 1;  
            }
            
    }
    return -1;
}
    
    




int main()
{
    int x;
    int low=0;
    int high;
    cout<<"enter the size of an array"<<endl;
    cin>>x;
    int arr[x];
    high=x-1;
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
      
    cout<<"enter the element to be searched"<<endl;
    cin>>x;

    int found=binarysearch(arr,low,high,x);
    
        if(found)
        
           
            cout<<"search found"<<endl;

        else
            cout<<"search not found"<<endl;
        
    


}