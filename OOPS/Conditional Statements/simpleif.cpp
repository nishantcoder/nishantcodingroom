#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age ";
    cin>>age;
    if (age>18)
    {
        cout<<"Eligible to vote";
    }
    if (age<=18)
    {
        cout<<"Cannot vote";
    }
    
    
    return 0;
}