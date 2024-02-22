#include <iostream>
using namespace std;

class alpha
{
    int a;

public:
    alpha(int x)
    {
        a = x;
        cout << "Alpha Initialised\n";
    }
    void display_a()
    {
        cout << "The value of a is " << a << endl;
    }
};

class beta
{
    float b;

public:
    beta(float x)
    {
        b = x;
        cout << "Beta Initialised\n";
    }
    void display_b()
    {
        cout << "The value of b is " << b << endl;
    }
};

class gamma : public alpha, public beta
{
    int c, d;

public:
    gamma(int p, float q, int r, int s) : alpha(p), beta(q)
    {
        c = r;
        d = s;
        cout << "Gamma Initialised\n";
    }
    void display_cd()
    {
        cout << "The value of c , d  is " << c << " , " << d << endl;
    }
};

int main()
{
    gamma g1(6, 7.6, 90, 40);
    g1.display_a();
    g1.display_b();
    g1.display_cd();

    return 0;
}