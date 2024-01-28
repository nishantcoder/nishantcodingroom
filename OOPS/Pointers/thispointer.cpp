#include <iostream>
#include <cstring>
using namespace std;
 
class person
{
    private:
    char name[25];
    int age;
       
    public:
    person()
    {
        age=0;
    }
    person(char s[],int t)
    {
        strcpy(name,s);
        age=t;
    }

    person &greater(person &x)
    {
        if (x.age>=age)
            return x;       //argument object
        
        else
            return *this;       //invoking object 
    }

    void display()
    {
        cout<<"Name "<<name<<endl;
        cout<<"Age "<<age<<endl;
    }

    ~person()
    {

    }
    
};


int main()
{
    char a[]="Suhani",b[]="Nishant",c[]="Kriti";
    person p1(a,20),p2(b,19),p3(c,22);
    person p=p2.greater(p1);
    p.display();
    p=p2.greater(p3);
    p.display();
    
    return 0;
}

/*
OUTPUT
Name Suhani
Age 20
Name Kriti
Age 22
*/