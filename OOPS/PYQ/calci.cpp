#include <iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

int division(int a,int b)
{
    return a/b;
}

void menu(void)
{
    cout<<"Choose the Options From Below"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;

}

int main()
{
    char run='y';
    int option=0,x=0,y=0;
    while (run=='y')
    {
        menu();
        cin>>option;
        cout<<"Enter two Number "<<endl;
        cin>>x>>y;
        switch (option)
        {
        case 1:
            cout<<"the result is :"<<add(x,y)<<endl;
            break;
        case 2:
            cout<<"the result is :"<<sub(x,y)<<endl;
            break;
        case 3:
            cout<<"the result is :"<<mul(x,y)<<endl;
            break;
        case 4:
            cout<<"the result is :"<<division(x,y)<<endl;
            break;
        
        default:
            break;
        }
        cout<<"Do you want to continue? Press 'y' for yes and 'n' for no"<<endl;
        cin>>run;
    }
    return 0;
}