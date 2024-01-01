//multiple INHERITANCE

#include <iostream>
using namespace std;
 
class sum
{
    protected:
    int a=0,b=0;
       
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void getab(int &c,int &d)           //Returning more than one value
    {
        c=a;
        d=b;
    }

    void add()
    {
        cout<<"The Sum is "<<a+b<<"\n";
    }
};

class diff
{
    protected:
    int a=0,b=0;
       
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void min()
    {
        cout<<"The difference is "<<a-b<<"\n";
    }
};

class Product
{
    protected:
    int a=0,b=0;
       
    public:
    void setdata_3(int x,int y)
    {
        a=x;
        b=y;
    }
    void prod()
    {
        cout<<"The Product is "<<a*b<<"\n";
    }
};

class multiple:public sum,public diff,public Product
{
    int x=0,y=0;
    public:
    void divide()       //takes data from setdata_1
    {
        getab(x,y);
        cout<<"The Division is "<<x/y<<"\n";
    }
    
};

int main()
{
    multiple obj;
    obj.sum::setdata(989,56);       //ambiguity handling in case of a same function apperaing in more than one classes
    obj.add();
    obj.diff::setdata(89,56);
    obj.min();
    obj.setdata_3(8,9);
    obj.prod();
    obj.divide();
    
    
    return 0;
}

/*
OUTPUT
The Sum is 1045
The difference is 33
The Product is 72
The Division is 17
*/