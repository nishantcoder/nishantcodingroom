//MBBS passing scheme
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter the marks ";
    cin >> marks;
    if (marks >= 50 && marks<75)
    {
        cout<<"Passed with 1st Division";
    }
    else if(marks>=75 && marks<90)
    {
        cout << "Distinction";
    }
    else if (marks>=90)
    {
        cout<<"Exceptional!";
    }
    else
    {
        cout<<"Failed!";
    }
    return 0;
}