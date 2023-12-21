/*
return by reference is only applicble to GLOBAL VARIABLES
not FOR LOCAL VARIABLES
*/

#include <iostream>
using namespace std;
 
int a;          //GLOBAL VARIABLES

//syntax of defining function return by reference
int &refback()
{
    return a;
}

int main()
{
    refback()=50;           //syntax of calling a function return by reference
    cout<<a;
   
    return 0;
}

//output 40