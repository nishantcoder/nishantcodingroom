#include <iostream>
using namespace std;
//function overloading 
void func(int a,int b)
{
    cout<<a+b;
}

void func(int a,int b,int c)
{
    cout<<a+b+c;
}

void func(double a,int b)
{
    cout<<a+b;
}

void func(double a,double b)
{
    cout<<a+b;
}



int main()
{
    func(40,50);
    cout<<"\n";
    func(12,40,50);
    cout<<"\n";
    func(2.89,40);
    cout<<"\n";
    func(67.89,98.78);
    cout<<"\n";

    return 0;
}

