#include <iostream>
using namespace std;
class addition
{
    
    public:
    int a,b;
    int add(int x,int y)
    {
        a=x;
        b=y;
        return (a+b);
    }
    addition();
};
addition :: addition()
{
}



int main()
{
    addition obj;
    cout<<"The sum is "<<obj.add(15,6);
    return 0;
}