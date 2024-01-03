//demonstrating the Function template
//do not use swap() as function with templates it will give the overloading error
#include <iostream>
using namespace std;

template <class T>
int swap_num(T& x, T& y)
{
    T temp = x;
    x = y;
    y = temp;
    return 0;
}
int main()
{
    int a=40,b=50;
    cout << "Before Swapping\na = " << a << "\nb = " << b << "\n\n";
    swap_num(a,b);
    cout<<"After Swapping\na = "<<a<<"\nb = "<<b<<"\n\n";

    return 0;
}