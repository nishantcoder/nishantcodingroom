//class type to basic int type converison

#include <iostream>
using namespace std;

class basic
{
    int x=0,y=0;
    public:
    basic(int a,int b)
    {
        x=a;
        y=b;
    }

    operator int()
    {
        return x+y;
    }

};


int main()
{
    basic b1(6,7);
    int sum=b1;
    cout<<"The sum is "<<sum<<"\n";
    return 0;
}