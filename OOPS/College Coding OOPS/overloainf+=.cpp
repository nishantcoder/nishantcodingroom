#include <iostream>
using namespace std;
 
class Distance
{
    int feet;
    float inch;
    public:
    Distance()
    {
        feet=0;
        inch=0.0;
    }
    Distance(int x,float y)
    {
        feet=x;
        inch=y;
    }
    void display()
    {
        cout<<"Distance is "<<feet<<" ft "<<inch<<" inch \n";
    }
    void operator+=(Distance d)
    {
        feet=feet+d.feet;
        inch=inch+d.inch;
    }

    void operator+=(int x)
    {
        feet=feet+x;
        inch=inch+x;
    }
};


int main()
{
    Distance d1(5,6.5),d2(3,2.5);
    d1.display();
    d2.display();
    d1+=d2;
    d1.display();
    d2+=2;
    d2.display();
    
    return 0;
}