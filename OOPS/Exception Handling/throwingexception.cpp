#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter values for a and b";
    cin >> a >> b;
    int x = a - b;
    try // try block throws an exception
    {
        if (x != 0)
        {
            cout << "Result (a/x) = " << a / x << endl;
        }
        else // there is an exception
        {
            throw(x); // throws int object
        }
    }
    catch (int) // catches the thrown exception
    {
        cout << "Exception caught : x = " << x << "\n";
    }
    cout << "End" << endl;

    return 0;
}

/*
Enter values for a and b20
15
Result (a/x) = 4
End

Enter values for a and b30
30
Exception caught : x = 0
End
*/