#include <iostream>
using namespace std;

class college
{
private:
    int m = 0, n = 0;
    void assign(int x, int y)
    {
        m = x;
        n = y;
    }

public:
    void show()
    {
        cout << "m =" << m << endl;
        cout << "n =" << n << endl;
    }

    friend void mean(college);
    void putdt()
    {
        m=40;
        n=50;
    }
};

void mean(college cs)
{
    cout<<(cs.m+cs.n)/2;
}

int main()
{
    int x = 0, y = 0;
    college cse;
    cse.putdt();
    cse.show();
    mean(cse);
    
}