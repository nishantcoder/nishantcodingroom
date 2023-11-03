#include <iostream>
using namespace std;

int main()
{
    float farh=0;
    cout<<"Enter tempertture in farenheit ";
    cin>>farh;
    float cel=(farh-32)*(float)5/9;
    cout<<"temperature is "<<cel<<" C";

}