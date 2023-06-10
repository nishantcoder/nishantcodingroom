#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age ";
    cin>>age;
    (age>18)?cout<<"Can Vote":cout<<"Cannot vote";
    return 0;
}