//Common for two class

#include <iostream>
using namespace std;
class beta;   
class alpha
{
    int a;
    
       
    public:
    alpha()
    {
        a=7;
    }
  
    void show()
    {
        cout<<"Value of a = "<<a<<endl;
    }
    friend void sum(alpha x,beta y);
    
};

class beta
{
    int b;
    
       
    public:
    beta()
    {
        b=3;
    }
   
    void show()
    {
        cout<<"Value of b = "<<b<<endl;
    }
    friend void sum(alpha x,beta y);
};

void sum(alpha x,beta y)
{
    int sum=0;
    sum=x.a+y.b;
    cout<<"The sum of a and b is "<<sum<<endl;
}

int main()
{
    alpha obj1;
    beta obj2;
    sum(obj1,obj2);
    
    return 0;
}

/*
OUTPUT
The sum of a and b is 10
*/