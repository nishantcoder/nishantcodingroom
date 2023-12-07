#include <iostream>
using namespace std;

//function returning array
int *getarray()
{
    static int arr[10];
    for (int  i = 0; i < 10; i++)
    {
        arr[i]=rand();
    }

    return arr;
    

}


int main()
{
    int *ptr;
    ptr=getarray();

    for (int  i = 0; i < 10; i++)
    {
        cout<<*(ptr+i)<<"\n";
    }
    
    
    return 0;
}
