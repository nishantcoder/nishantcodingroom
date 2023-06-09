//relational operators
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value for a and b \n";
    cin>>a>>b;
    if (a<b)
    cout<<a<<" is less than "<<b<<"\n";
    if (a>b)
    cout<<a<<" is graeter than "<<b<<"\n";
    if (a<=b)
    cout<<a<<" is less than or equal to "<<b<<"\n";
    if (a>=b)
    cout<<a<<" is greater than or equal to "<<b<<"\n";
    if (a==b)
    cout<<a<<" is equal to "<<b<<"\n";
    if (a!=b)
    cout<<a<<" is not equal to "<<b<<"\n";
    return 0;
}