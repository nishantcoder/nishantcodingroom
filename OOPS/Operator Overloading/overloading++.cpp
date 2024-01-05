#include <iostream>
using namespace std;
 
class integer
{
    int i;
       
    public:
    integer()
    {
        i=0;
    }
    void operator++()
    {
        i++;
    }
    void display()
    {
        cout<<"i = "<<i<<endl;
    }
};


int main()
{
    integer obj;
    obj.display();
    ++obj;
    obj.display();
    
    return 0;
}
