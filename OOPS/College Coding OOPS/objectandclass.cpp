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

int main()
{
    Distance d1, d2;
    d1.getdata();
    d2.setdata(7, 9.6);
    d1.showdata();
    d2.showdata();
    return 0;
}