//overloading unary operator

#include <iostream>
using namespace std;
 
class space
{
    int x,y,z;
    public:
    void setdata(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display(void)
    {
        cout<<"X = "<<x<<"\n";
        cout<<"Y = "<<y<<"\n";
        cout<<"X = "<<z<<"\n";
    }
    void operator-()
    {
        x=-x;
        y=-y;
        z=-z;
    }
    
};


int main()
{
    space s1;
    s1.setdata(7,-9,4);
    s1.display();
    cout<<"After overloading \n";
    -s1;                //activates operator-() function
    s1.display();
    
    return 0;
}