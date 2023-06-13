#include <iostream>
using namespace std;
class addition
{
    int a,b;
    public:
    addition(int,int);
    ~addition();
    int add()
    {
        return (a+b);
    }
};
addition :: addition(int x,int y)
{
    a=x;
    b=y;
}

addition::~addition()
{
    cout<<"\nMemory Deallocated";
}

int main()
{
    addition obj(7,9);
    /*
    The connstructor that has arguments are called parameterized constructor
    */
    cout<<obj.add();
    return 0;
}