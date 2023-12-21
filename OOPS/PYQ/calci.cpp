/*
PYQ 2020 Question number 2 (b) BEU/AKU 
Creating Four Function calculator
strcmp returns 0 if strings are identical else returns 1
*/

#include <iostream>
using namespace std;

float add(float a,float b)
{
    return a+b;
}

float sub(float a,float b)
{
    return a-b;
}

float mul(float a,float b)
{
    return a*b;
}

float division(float a,float b)
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

float main()
{
    char run='y';
    int option=0;
    float x=0,y=0;
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