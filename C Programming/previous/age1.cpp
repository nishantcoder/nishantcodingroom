#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the age of employee between 20 to 60 :  \n";
    cin>>y;
    x=y/10;
    switch(x)
    {
        case 2:
        cout<<"Entered age of employee is in range of 20 to 29. \n";
        break;
        case 3:
        cout<<"Entered age of employee is in range of 30 to 39. \n";
        break;
        case 4:
        cout<<"Entered age of employee is in range of 40 to 49. \n";
        break;
        case 5:
        cout<<"Entered age of employee is in range of 50 to 59. \n";
        break;
        case 6:
        cout<<"Entered age of employee is perfect 60. \n";
        break;
        default:
        cout<<"Age of employee is out of range. \n";
    }
return 0;
}