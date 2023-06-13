#include <iostream>
using namespace std;
//Data encapsulation
class parent
{
    //access specifier here private
    private:
    int mem1; //members
    public:
    int mem2;

};
class daughther : protected parent
{

};
//Data Abstraction
/*
                            Public Derivation      Private Derivation     Protected Derivation
    1. Private members        Not inherited           Not inherited         Not inherited
    2. Protected members        Protected               Private                 Protected
    3. Public members           Public                  Private                 Protected
*/
int main()
{
    parent prt;
    daughther obj;
    //cout<<obj.mem2;
    return 0;

}