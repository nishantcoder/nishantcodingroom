#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}

int main()
{
	int x=0,y=0;
	cout<<"Enter two number ";
	cin>>x>>y;
	cout<<"Before Swapping\nx= "<<x<<"\ny="<<y<<"\n";
	swap(x,y);
	cout<<"After Swapping\nx= "<<x<<"\ny="<<y<<"\n";
	return 0;
}