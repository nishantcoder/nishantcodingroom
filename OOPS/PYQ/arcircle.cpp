//constructor 
#include <iostream>
using namespace std;
#define pi 3.14
class area
{
    public:
    area(float radius)
    {
        cout<<"Area Of circle "<<pi*radius*radius<<endl;
    }
};

int main()
{
    area obj(10);
}