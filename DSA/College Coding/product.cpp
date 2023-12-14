#include <iostream>
using namespace std;
 
 int product(int a,int b)
 {
    return a*b;
 }


int main()
{
    int a=0,b=0;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b);
    
    return 0;
}