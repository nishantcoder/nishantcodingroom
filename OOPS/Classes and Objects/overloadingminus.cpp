#include <iostream>
using namespace std;

class opr
{
    int x=0,y=0,z=0;
    public:
    void getval(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }

    void operator-()
    {
        x=-x;
        y=-y;
        z=-z;
    }
    void display()
    {
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;
    }
};

int main()
{
    opr obj;
    obj.getval(40,-90,80);
    cout<<"BEfore Overloading"<<"\n";
    obj.display();
    -obj;
    cout<<"After Overloading"<<"\n";
    obj.display();

    return 0;
}