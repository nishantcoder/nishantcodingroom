#include <iostream>
using namespace std;
 
int &returnref(int &ref)
{
    cout<<"the value of ref "<<ref<<endl;
    cout<<"the address of ref "<<&ref<<endl;
    return ref;
}

int main()
{
    int a=40;
    int &b=returnref(a);
    cout<<"the value of a "<<a<<endl;
    cout<<"the address of a "<<&a<<endl;

    cout<<"the value of b "<<b<<endl;
    cout<<"the address of b "<<&b<<endl;
    
 return 0;
}