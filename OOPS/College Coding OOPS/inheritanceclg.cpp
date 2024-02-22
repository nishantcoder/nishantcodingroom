#include <iostream>
using namespace std;
 
class alpha
{  
    public:
    alpha()
    {
        cout<<"Alpha base class\n";
    }
    ~alpha()
    {
        cout<<"Alpha destructor\n";
    }
    
};

class beta:public alpha
{
    public:
    beta()
    {
        cout<<"beta derieved class\n";
    }
    ~beta()
    {
        cout<<"beta destructor\n";
    }
    
};
int main()
{
    beta b1;
    

    
    return 0;
}