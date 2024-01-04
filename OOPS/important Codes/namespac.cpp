//namespace demonstration code 
#include <iostream>
using namespace std;
namespace nishant
{
    class math
    {
        

    public:
        float sum(float a,float b)
        {
            return a + b;
        }
        float minus(float a,float b)
        {
            return a - b;
        }
        float product(float a,float b)
        {
            return a * b;
        }
        float divide(float a,float b)
        {
            return a / b;
        }
    }calculator;
};

int main()
{
    using namespace nishant;
    float x=98.78,y=56.56;
    cout<<"The sum is "<<calculator.sum(x,y)<<endl;
    cout<<"The difference is "<<calculator.minus(x,y)<<endl;
    cout<<"The product is "<<calculator.product(x,y)<<endl;
    cout<<"The division is "<<calculator.divide(x,y)<<endl;

    return 0;
}