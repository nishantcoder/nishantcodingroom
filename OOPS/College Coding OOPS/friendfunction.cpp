//Common for two class

#include <iostream>
using namespace std;
class num2;   
class num1
{
    int a;
    
       
    public:
    num1()
    {
        a=0;
    }
    num1(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<"Value of a = "<<a<<endl;
    }
    friend void sum(num1 x,num2 y);
    
};

class num2
{
    int b;
    
       
    public:
    num2()
    {
        b=0;
    }
    num2(int x)
    {
        b=x;
    }
    void show()
    {
        cout<<"Value of b = "<<b<<endl;
    }
    friend void sum(num1 x,num2 y);
};

void sum(num1 x,num2 y)
{
    int sum=0;
    sum=x.a+y.b;
    cout<<"The sum of a and b is "<<sum<<endl;
}

int main()
{
    num1 obj1(40);
    num2 obj2(50);
    sum(obj1,obj2);
    
    return 0;
}

/*
OUTPUT
The sum of a and b is 90
*/