#include <iostream>
using namespace std;
//Data encapsulation
class math
{
    //access specifier here private
    private:
    int num; //members
    public:
    int factorial(int n) //member function
    {
        num=n;
        if(num!=0)
        return n*factorial(n-1);
        else
        return 1;

    }

};

//Data Abstraction

int main()
{
    math fact;
    cout<<"Enter a number to find the factorial :\t";
    int num;
    cin>>num;
    cout<<fact.factorial(num);
    return 0;

}