/*
This code makes you understand that how we can define a function outside the class
*/
#include <iostream>
using namespace std;

class Distance
{
private:
    int feet = 0;
    float inch = 0;

public:
    void getdata();
    void setdata(int a, float b);
    void showdata();
    void adddist(Distance,Distance);
    
};

void Distance::getdata()
{
    cout << "Enter the value of feet and inch \n";
    cin >> feet >> inch;
}
void Distance::setdata(int a, float b)
{
    feet = a;
    inch = b;
}
void Distance::showdata()
{
    cout << "The distance is " << feet << " Ft " << inch << " Inch\n";
}

void Distance::adddist(Distance x,Distance y)
{
    feet=x.feet+y.feet;
    inch=x.inch+y.inch;
    while (inch>=12)
    {
        inch=inch-12;
        feet++;
    }
    
}

int main()
{
    Distance d1, d2,d3;
    d1.getdata();
    d2.setdata(7, 9.6);
    d3.adddist(d1,d2);
    d1.showdata();
    d2.showdata();
    d3.showdata();
    return 0;
}


/*
Enter the value of feet and inch 
5
16.5
The distance is 5 Ft 16.5 Inch
The distance is 7 Ft 9.6 Inch
The distance is 14 Ft 2.1 Inch
*/