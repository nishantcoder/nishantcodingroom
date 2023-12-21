/*
20 Deecember 
Function returning more than one values
*/

#include <iostream>
using namespace std;
 
void returnback(int a,int b,int &c,int &d)          //called Function
{
    c=a+b;
    d=a-b;
}


int main()
{
    int a=0,b=0,c=0,d=0;
    cout<<"Enter the values for A and B\n";
    cin>>a>>b;
    returnback(a,b,c,d);            //calling Function
    cout<<"The sum of A and B is "<<c<<endl;
    cout<<"The difference of A and B is "<<d<<endl;

    
    
    return 0;
}