#include <iostream>
using namespace std;

void sub(int a, int b)
{
    cout << "Inside fuction\n";
    int x = a - b;
    try // try block throws an exception
    {
        if (x != 0)
        {
            cout << "Result (a/x) = " << a / x << endl;
        }
        else // there is an exception
        {
            throw(x); // throws int object or throw x;
        }
    }
    catch (int) // catches the thrown exception
    {
        cout << "Exception caught inside function\n";
        throw;
    }
}

int main()
{
    cout << "Inside main\n";
    try // try block throws an exception
    {
        cout << "We are in try block\n";
        sub(15, 10);
        sub(10, 10);
    }
    catch (int) // catches the thrown exception
    {
        cout << "Exception caught inside main.\n";
    }
    cout << "End" << endl;

    return 0;
}

/*
Inside main
We are in try block
Inside fuction
Result (a/x) = 3
Inside fuction
Exception caught inside function
Exception caught inside main.
End
*/