//this Demostrates the Derievd constructor
#include <iostream>
using namespace std;

class alpha
{
    int x;

public:
    alpha(int i)
    {
        x = i;
        cout << "alpha initialized\n";
    }
    void show_X()
    {
        cout << "X = " << x << endl;
    }
};

class beta
{
    float y;

public:
    beta(float p)
    {
        y = p;
        cout << "Beta initialized \n";
    }
    void show_y()
    {
        cout << "Y = " << y << endl;
    }
};

class gamma:public beta,public alpha
{
    int m,n;
    public:
    gamma(int a,float b,int c,int d):alpha(a),beta(b)  //initialization section
    {
        m=c;
        n=d;
        cout<<"Gamma initialized\n";

    }
    void show_mn(void)
    {
        cout<<"m = "<<m<<endl;
        cout<<"n = "<<n<<endl;
    }
};

int main()
{
    gamma obj(40,1.76,50,63);
    obj.show_X();
    obj.show_y();
    obj.show_mn();

    return 0;
}

/*
OUTPUT
Beta initialized 
alpha initialized
Gamma initialized
X = 40
Y = 1.76
m = 50
n = 63
*/