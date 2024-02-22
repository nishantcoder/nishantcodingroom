#include <iostream>
using namespace std;
 
template <class T>
class test
{
private:
    T var; 
public:
    test(T x)
    {
        var=x;
        cout<<"We are in constructor\n";
        cout<<"The value of variable is "<<var<<endl;
    }
};


int main()
{
    test<int> a1(40);
     
    test<float> a2(40.23);
    
    test<char> a3('N');

    return 0;
}