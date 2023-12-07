#include <iostream>
using namespace std;

class complex
{
    float real = 0, imag = 0;

public:
    complex(void)
    {
    }
    complex(float x, float y)
    {
        real = x;
        imag = y;
    }
    void add(complex x, complex y)
    {
        complex sum;
        sum.real = x.real + y.real;
        sum.imag = x.imag + y.imag;
        cout << sum.real << " + j" << sum.imag << "\n";
    }
};

int main()
{
    complex c1(7.8, 6.9), c2(6.3, 1.7), res;

    res.add(c1, c2);

    return 0;
}