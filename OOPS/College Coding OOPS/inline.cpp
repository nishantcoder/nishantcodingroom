#include <iostream>
using namespace std;
 
inline int square(int a)
{
    cout<< a*a<<"\n";
}

int main()
{
    square(8);
    square(7);
    square(789);
    
    return 0;
}