//Two-dimensional arrays in C++
#include <iostream>
using namespace std;
int main()
{
   int i,j;
   int num1[3][4],num2[3][4];
   cout <<"Enter the elements of 3X4 array num1\n"; 
   for(i=0; i<3; i++)
   for(j=0; j<4; j++)
   cin>>num1[i][j];
   
   cout <<"Enter the elements of 3X4 array num2\n"; 
   for(i=0; i<3; i++)
   for(j=0; j<4; j++)
   cin>>num2[i][j];
   
   cout <<"The 3X4 array num1 is\n"; 
   for(i=0; i<3; i++)
    {
      for(j=0; j<4; j++)
      cout<<num1[i][j] <<"\t";
      cout<<"\n";
    }

   cout<<"The 3X4 array num2 is\n"; 
   for(i=0; i<3; i++)
    {
      for(j=0; j<4; j++)
      cout <<num2[i][j]<<"\t";
      cout <<"\n";
    }

   cout<<"The sum of num1 and num2 is\n";
   for(i=0; i<3; i++)
    {
      for(j=0; j<4; j++)
      cout<<(num1[i][j] + num2[i][j])<<"\t";
      cout<<"\n";
    }
   return 0;
}
