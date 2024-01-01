/*here is the overloading of + and <= in string manipulations*/


#include <iostream>
#include <cstring>
using namespace std;
 
class String
{
    char *ptr;
    int len;     
    public:
    String()        //default constructor
    {
        len=0;
        ptr=0;
    }
    
    String(const char *s)           //parametrized constructor
    {
        len=strlen(s);
        ptr=new char[len+1];
        strcpy(ptr,s);
    }
    
    String(const String &s)     //copy constructor
    {
        len=s.len;
        ptr=new char[len+1];            //dynamic constructor
        strcpy(ptr,s.ptr);
    }
    
    //+ operator
    friend String operator+(const String &s,const String &t);

    //<= operator
    friend int operator<=(const String &s,const String &t);
    friend void show(String);
    
};

String operator+(const String &s,const String &t)
{
    String temp;
    temp.len=s.len+t.len;
    temp.ptr=new char[temp.len+1];
    strcpy(temp.ptr,s.ptr);
    strcat(temp.ptr,t.ptr);
    return temp;
}

int operator<=(const String &s,const String &t)
{
    int m=strlen(s.ptr);
    int n=strlen(t.ptr);
    if(m<=n)
    return 1;
    else
    return 0;
}
void show(const String s)
{
    cout<<s.ptr<<"\n";
}




int main()
{
    
    String s1="Nishant ";
    String s2="Raj ";
    String s3="Suhani Di";
    String t1,t2,t3;
    t1=s1;
    t2=s2;      //copy constructor 
    t3=s1+s3;
    show(t1);
    show(t2);
    show(t3);
    cout<<"\n";
    if (t1<=t3)
    {
        show(t1);
        cout<<"Smaller than ";
        show(t3);
        cout<<"\n";
    }
    else
    {
        show(t3);
        cout<<"Smaller than ";
        show(t1);
        cout<<"\n";
    }

    return 0;
}