#include <iostream>
using namespace std;
 
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void print(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
}

void bubblesort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int flag=0;
        printf("Pass %d\n",i+1);
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=1;
            }
            
            
        }
        
        printf("\n");
        if (flag==0)
        {
            break;
        }

        for (int k = 0; k < n; k++)
        {
            printf("%d   ",arr[k]);
        }
        printf("\n"); 
    }
}

int main()
{
    int arr[]={12,1,67,9,8,4,0,11};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Before Sorting \n";
    print(arr,size);
    bubblesort(arr,size);
    cout<<"After sorting \n";
    print(arr,size);
    
    return 0;
}