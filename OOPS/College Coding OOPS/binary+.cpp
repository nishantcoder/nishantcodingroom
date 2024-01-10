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
    Distance operator+(Distance d)
    {
        Distance temp;
        temp.feet=feet+d.feet;
        temp.inch=inch+d.inch;

        while (temp.inch>=12)
        {
            temp.inch=temp.inch-12;
            temp.feet++;
        }
        return temp;
    }

    Distance operator+(int d)
    {
        Distance temp;
        temp.feet=feet+d;
        temp.inch=inch+d;

        while (temp.inch>=12)
        {
            temp.inch=temp.inch-12;
            temp.feet++;
        }
        return temp;
    }
    
    
};


int main()
{
    Distance d1(5,6.5),d2(3,2.5),d3;
    d3=d1+d2;
    d3.display();
    d3=d3+5;
    d3.display();
    
    
    return 0;
}