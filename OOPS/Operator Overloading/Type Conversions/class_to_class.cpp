#include <iostream>
using namespace std;


class invent2;      //forward declaration

class invent1
{
    int code;
    int item;
    float price;
    public:
    invent1(int a,int b,float c)
    {
        code=a;
        item=b;
        price=c;

    }
    void display()
    {
        cout<<"Code : "<<code<<"\n";
        cout<<"Item : "<<item<<"\n";
        cout<<"Price : "<<price<<"\n";
    }

    int getcode()
    {
        return code;
    }

    int getitem()
    {
        return item;
    }
    float getprice()
    {
        return price;
    }

    operator float()        //overloading float
    {
        return (item*price);
    }
};

class invent2
{
private:
    int code;
    float value;
public:
    invent2()       //default constructor
    {
        code=0;
        value=0;
    }
    
    invent2(int x,float y) //if we need to pass some values 
    {
        code=x;
        value=y;

    }

    void display()
    {
        cout<<"Code : "<<code<<"\n";
        cout<<"Value : "<<value<<"\n";
    }

    invent2(invent1 p)      //constructor to connvert class 1 to class 2
    {
        code=p.getcode();
        value=p.getitem()*p.getprice();
    }  
    //this constructor will run automatically we create an object
    
};



int main()
{

    invent1 s1(100,5,176.9);
    invent2 dl;
    float total_value;
    total_value=s1;     //class to basic
    dl=s1;              //class to class

    cout<<"Product Details INVENT 1 type\n";
    s1.display();
    cout<<"Stock Value\n";
    cout<<"Value "<<total_value<<"\n";

    cout<<"Product Details INVENT 2 type\n";
    dl.display();

    
    return 0;
}