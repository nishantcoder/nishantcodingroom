#include <iostream>
using namespace std;

class temp
{

    float farh=0,cel=0;
    
    public:
    void read_temp()
    {
        cout<<"Enter tempertture in farenheit ";
        cin>>farh;
        convert(farh);
    }
    private:
    void convert(float tem)
    {
        farh=tem;
        cel=(farh-32)*(float)5/9;
        cout<<"temperature is "<<cel<<" C";
    }

};

int main()
{
    temp obj;
    obj.read_temp();
    return 0;
}