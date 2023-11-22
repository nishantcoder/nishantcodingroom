#include <iostream>
using namespace std;

class class2

class class1 //source class
{
    int code=0;
    float price=0;

    public:
        class1(int a,float b)
        {
            code=a;
            price=b;
        }

        int getcode()
        {
            return code;
        }

        int getprice()
        {
            return price;
        }

        operator class2()   //class1 to class2 conversion
        {
            class2 temp;
            temp.code=code;
            temp.price=price;
            return temp;
        }
};


class class2            //destination class
{
    int cod=0;
    float pric=0;

    public:
        class2(int x,float y)
        {
            cod=x;
            pric=y;
        }

        void putdata()
        {
            cout<<"code "<<cod<<"\n";
            cout<<"Price "<<pric<<"\n";
        }

        class2(class1 p)
        {
            cod=p.getcode();
            pric=p.getprice();
        }
};

int main()
{
    class1 s1(1,678.9);
    class2 dl;
    float total;
    total=s1;
    dl=s1;
    s1.getcode();
    dl.putdata();
    return 0;
}