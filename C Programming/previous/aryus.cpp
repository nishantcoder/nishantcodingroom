#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter values to be entered in an array \n";
    cin>>a>>b>>c;
    int sim[3]={a,b,c};
    int sum;
    sum=sim[0]+sim[1]+sim[2];
    cout<<"The sum of "<<sum;
    return 0;
}