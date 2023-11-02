#include <iostream>
using namespace std;
#define max 100

class linear
{
    int size=0;
    int arr[max];

    public:
        void insert(int n)
        {
            size=n;
            cout<<"Enter "<<size<<" elements in an array"<<endl;
            for (int i = 0; i < n; i++)
            {
                cin>>arr[i];
            }
            
        }

        int lin_serach(int serach)
        {
            for (int i = 0; i < size; i++)
            {
                if (arr[i]==serach)
                {
                    return arr[i];
                }
                
            }
            return -1;
            
        }
};

int main()
{
    int n=0;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    linear linobj;
    linobj.insert(n);

    int sear=0;
    cout<<"Enter Element to be searched"<<endl;
    cin>>sear;
    
    int found=linobj.lin_serach(sear);

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