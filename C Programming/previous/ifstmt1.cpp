#include <iostream>
using namespace std;
int main()
{
    int a,b,sum;
    cout<<"Enter the value of a and b \n";
    cin>>a>>b;
    sum = a+b;
    cout<<"The sum of a and B is "<<sum<<"\n";
    if (sum>20)
    {
        cout<<"Sum is greater than 20 \n";
    }
    else if (sum>10)
    {
        cout<<"Sum is greater than 10 And less than 20 \n";
    }
    else
    {
        cout<<"Sum is less than 10 \n";
    }
return 0;
}