#include <iostream>
using namespace std;

void test(int x)
{
    try
    {
        if (x == 0)
        {
            throw x;
        }
        if (x == 1) // there is an exception
        {
            throw('x'); // throws int object
        }
        if (x == -1)
        {
            throw(1.78);
        }
        else
        {
            cout << "End of try catch system" << endl;
        }
        
    }
    catch (...) // catches the thrown exception
    {
        cout << "Exception caught \n";
    }

}

int main()
{

    cout << "We are in try block\n";
    test(0);
    test(1);
    test(-1);

    

    return 0;
}

/*
We are in try block
Exception caught 
Exception caught 
Exception caught 
*/