#include <iostream>
using namespace std;
class base
{
    public:
    void func(void)
    {
        cout<<"Overriding from Base/parent class\n";

    }
};
//function overiding 
class derived:public base //inheritance 
{
    public:
    void func(void)
    {
        cout<<"Overiding from child class\n";
        
    }
};

int main()
{
    derived obj;
    obj.base::func();
    obj.func();
    return 0;
}