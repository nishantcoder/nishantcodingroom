#include <iostream>
using namespace std;

void sub(int a, int b)
{
    int x = a - b;
    if (x != 0)
    {
        cout << "Result (a/x) = " << a / x << endl;
    }
    else // there is an exception
    {
        throw(x); // throws int object
    }
}

int main()
{
    int a, b;

    try // try block throws an exception
    {
        cout << "We are in try block\n";
        sub(15, 10);
        sub(10, 10);
    }
    catch (int) // catches the thrown exception
    {
        cout << "Exception caught.\n";
    }
    cout << "End" << endl;

    return 0;
}

/*
We are in try block
Result (a/x) = 3
Exception caught.
End
*/