/*Write a program that takes marks of three students as input.\n 
Compare the marks to see which student has scored the highest.\n Check also if two or more students have scored equal marks.\n*/
#include <iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"Enter the marks of three students a,b,c : \n";
   cin>>a>>b>>c;
   if (a>b)
   cout<<" Student A scored highest marks.\n";
   else if (b>c)
   cout<<" Student B scored highest marks.\n";
   else
   cout<<" Student C scored highest marks.\n";
   if (a==b)
   cout<<" Student A and B has scored equal marks.\n";
   else if (b==c)
   cout<<" Student B and C has scored equal marks.\n";
   else if (a==c)
   cout<<" Student A and C has scored equal marks.\n";
   return 0;
}