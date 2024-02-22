#include <iostream>
using namespace std;

template <typename T>
T greatest(T a,T b)
{
    return (a>b)?a:b;
}

int main()
{
    int a=5,b=7;
    float c=9.78,d=5.7;
    char e='C',f='e';

    cout<<"The greatest value is "<<greatest(a,b)<<"\n";
    cout<<"The greatest value is "<<greatest<float>(c,d)<<"\n";
    cout<<"The greatest value is "<<greatest(e,f)<<"\n";
}