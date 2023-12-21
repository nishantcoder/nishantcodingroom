/*
PYQ 2020 Question number 6 (b) BEU/AKU 
Overlaoding == operator to comapre two strings
strcmp returns 0 if strings are identical else returns 1
*/


#include <iostream>
#include <cstring>
using namespace std;
 
class String
{
    char ptr[81];     
    public:
    String()
    {
        cout<<"Enter a string\n";
        gets(ptr);
    }
    
    
    void operator ==(String s)
    {
        if(strcmp(s.ptr,ptr)==0)
        {
            cout<<"strngs are equal\n";
        }
        else
            cout<<"strngs are unequal\n";
    }
    
};


int main()
{
    
    String obj;
    String obj1;
    obj==obj1;
    return 0;
}