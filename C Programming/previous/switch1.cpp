#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the number between 0 to 39 :  \n";
    cin>>y;
    x=y/10;
    switch(x)
    {
        case 0:
        cout<<"Entered number is in range of 0 to 9. \n";
        break;
        case 1:
        cout<<"Entered number is in range of 10 to 19. \n";
        break;
        case 2:
        cout<<"Entered number is in range of 20 to 29. \n";
        break;
        case 3:
        cout<<"Entered number is in range of 30 to 39. \n";
        break;
        default:
        cout<<"Number is out of range. \n";
    }
return 0;
}