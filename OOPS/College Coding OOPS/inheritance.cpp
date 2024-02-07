#include <iostream>
using namespace std;
 
class counter 
{
    protected:
    int count;
       
    public:
    counter()
    {
        count=0;
    }
    void display()
    {
        cout<<count<<"\n";
    }

    counter operator++()
    {
        counter temp;
        temp.count=++count;
        return temp;
    }
    counter operator++(int)
    {
        counter temp;
        temp.count=count++;
        return temp;
    }
};


class downcount:public counter
{
    public:
    downcount operator--()
    {
        downcount temp;
        temp.count=--count;
        return temp;
    }
    downcount operator--(int)
    {
        downcount temp;
        temp.count=count--;
        return temp;
    }

};


int main()
{
    downcount c1,c2;
    c1++;
    c1++;
    ++c1;
    ++c1;
    ++c1;
    c2=c1;
    c1.display();
    --c1;
    c1.display();
    c2--;
    c2.display();
    

    return 0;
}

/*
OUTPUT
The value of C1 is 0
The value of C2 is 0
The value of C3 is 0
The value of C1 is 1
The value of C2 is 2
The value of C3 is 2
The value of C3 is 3
*/