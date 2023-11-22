//swapping using reference varibales 
#include <iostream>
using namespace std;

class swapp
{
    public:
        int swaap(int &a,int &b)
        {
            int t=a;
            a=b;
            b=t;
        }
};

int main()
{
    int a=40,b=50;
    swapp obj;
    obj.swaap(a,b);
    cout<<"a = "<<a<<endl<<"b = "<<b;


}