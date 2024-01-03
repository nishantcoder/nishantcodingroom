//3 JAN'2024 OOPS WITH C++ LAB BPMCE MADHEPURA

#include <iostream>
using namespace std;
 
class Distance
{
    int feet;
    float inch;
       
    public:
        Distance();
        Distance(int,float);
        void showdata(void);
    
};

Distance::Distance()
{
    feet=0;
    inch=0;
    cout<<"We are in Default Constructor\n";
}
Distance::Distance(int x,float y)
{
    feet=x;
    inch=y;
}
void Distance::showdata(void)
{
    cout<<"The value of Feet is "<<feet<<endl;
    cout<<"The value of Inch is "<<inch<<endl;

}

int main()
{
    Distance d1,d2;
    d1.showdata();
    d2.showdata();
    Distance d3(7,9.8);     //constructor call implicitly
    Distance d4=Distance(3,7.8);        //explicit call
    d3.showdata();
    d4.showdata();
    
    return 0;
}

/*
OUTPUT

We are in Default Constructor
We are in Default Constructor
The value of Feet is 0
The value of Inch is 0
The value of Feet is 0
The value of Inch is 0
The value of Feet is 7
The value of Inch is 9.8
The value of Feet is 3
The value of Inch is 7.8
*/