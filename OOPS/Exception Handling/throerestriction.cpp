#include <iostream>
using namespace std;

void test(int x) throw(int, double)
{

    if (x == 0)
    {
        throw 'x';
    }
    if (x == 1) // there is an exception
    {
        throw(x); // throws int object
    }
    if (x == -1)
    {
        throw(1.78);
    }

    cout << "End of try catch system" << endl;
}

int main()
{

    cout << "Testing throw restrictions\n";
    try
    {
        
        cout << "x==1 \n";
        test(1);
        cout << "x==0 \n";
        test(0);
        cout << "x==-1 \n";
        test(-1);
        cout << "x==2 \n";
        test(2);
    }
    catch (int) // catches the thrown exception
    {
        cout << "Exception caught of int type\n";

    }
    catch (char) // catches the thrown exception
    {
        cout << "Exception caught of character type\n";
    }
    catch (double) // catches the thrown exception
    {
        cout << "Exception caught of double type\n";
    }
    cout<<"End of try catch system\n";

    return 0;
}

/*
Testing throw restrictions
x==0 Exception caught of int type
*/