#include<iostream>
using namespace std;

int hcf(int a, int b)
{
    if(b!=0)
    return hcf(b,a%b);
    else
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;


    if(a>b)
    cout<<hcf(a,b);
    else
    cout<<hcf(b,a);

}

