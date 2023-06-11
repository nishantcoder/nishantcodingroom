#include <iostream>
using namespace std;
//Data encapsulation
class sum
{
    //access specifier here public
    public:
    int a,b; //members
    public:
    int add(int a,int b); //member function
};

//Data Abstraction
int sum :: add(int a,int b)
{
    return (a+b);
}//creating functions


int main()
{
    sum s1;      //s1 is object of class sum
    cout<<s1.add(6,7);
    return 0;

}