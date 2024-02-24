#include <iostream>
using namespace std;

/*
Stack Unwinding in C++
Stack Unwinding is the process of removing function entries from function call stack at run time. 
The local objects are destroyed in reverse order in which they were constructed. 

Stack Unwinding is generally related to Exception Handling. 
*/

void fun1() throw(int)
{
    cout<<"We are in function in 1 \n";
    throw 40;
    cout<<"End of function 1\n";
}

void fun2() throw(int)
{
    cout<<"We are in function in 2 \n";
    fun1();
    cout<<"End of function 2\n";
}

void fun3()
{
    cout<<"We are in function in 3 \n";
    try
    {
        fun2();
    }
    catch(int i)
    {
        cout<<"Exception caught : "<<i<<endl;
    }
    
    cout<<"End of function 3\n";
}


int main()
{
    fun3();
}

/*
OUTPUT
We are in function in 3 
We are in function in 2 
We are in function in 1 
Exception caught : 40
End of function 3
*/