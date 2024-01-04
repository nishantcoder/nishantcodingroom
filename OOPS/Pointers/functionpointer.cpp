//Also known as calllback function
#include <iostream>
using namespace std;
 
typedef void (*Funptr)(int,int);
void add(int a,int b)
{
    cout<<"sum is "<<a+b<<endl;
}

void sub(int a,int b)
{
    cout<<"difference is "<<a-b<<endl;
}

int main()
{
    Funptr ptr;
    ptr=&add;
    ptr(1,3);
    ptr=&sub;
    ptr(8,5);
    
    return 0;
}