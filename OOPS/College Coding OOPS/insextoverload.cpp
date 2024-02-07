#include <iostream>
using namespace std;
 
class Distance
{
    int feet;
    float inch;
    
    public:
       friend istream &operator>>(istream &is,Distance &d);
       friend ostream &operator<<(ostream &os,Distance &d);

    
};

istream &operator>>(istream &is,Distance &d)
{
    is>>d.feet>>d.inch;
    return is;
}

ostream &operator<<(ostream &os,Distance &d)
{
    os<<d.feet<<" Ft "<<d.inch<<" in\n";
    return os;
}
int main()
{
    Distance d1,d2;
    cout<<"Enter feet and inch values for d1 and d2\n";
    cin>>d1>>d2;
    cout<<"The distance D1 is "<<d1;
    cout<<"The distance is D2 "<<d2;
    
    return 0;
}


/*
OUTPUT
Enter feet and inch values for d1 and d2
5
2.3
6
7.8
The distance D1 is 5 Ft 2.3 in
The distance is D2 6 Ft 7.8 in
*/