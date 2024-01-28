//Array of pointer to objects
#include <iostream>
#define N 3
using namespace std;

class item
{
private:
    int code;
    float price;

public:
    item()
    {
        code=0;
        price=0.0;
    }
    void loaddata(int a,float b)
    {
        code=a;
        price=b;
    }
    void show(void)
    {
        cout<<"Code  : "<<code<<endl;
        cout<<"Price : "<<price<<endl;
    }
};

int main()
{
    item *ptr[N];       //important line
    int code=0;
    float price=0.0;

    for (int i = 0; i < N; i++)
    {
        ptr[i]=new item;    //important line
        cout<<"Input Code and price for item "<<i+1<<endl;
        cin>>code>>price;
        ptr[i]->loaddata(code,price);       //important line
    }
    
    for (int i = 0; i < N; i++)
    {
        cout<<"Item "<<i+1<<endl;
        ptr[i]->show();

    }
    return 0;
}
/*
OUTPUT
Input Code and price for item 1
914
256.98
Input Code and price for item 2
915
278.23
Input Code and price for item 3
916
236.56
Item 1
Code  : 914
Price : 256.98
Item 2
Code  : 915
Price : 278.23
Item 3
Code  : 916
Price : 236.56
*/