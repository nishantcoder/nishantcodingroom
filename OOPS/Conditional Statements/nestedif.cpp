//MBBS passing scheme
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter the marks ";
    cin >> marks;
    if (marks >= 50)
    {
        if (marks >= 75 && marks<=90)
        {
            cout << "Distinction";
        }
        else
        {
            cout<<"Passed";
        }        
    }
    else
    {
        cout << "Passed Under Regulations";
    }
    return 0;
}