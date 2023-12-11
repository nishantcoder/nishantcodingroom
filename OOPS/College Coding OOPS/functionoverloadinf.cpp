#include <iostream>
using namespace std;

int area(int a)
{
    return a * a;
}

int area(int a, int b)
{
    return a * b;
}

float area(int b, float h)
{
    return (b * h) / 2;
}

void menu(void)
{
    cout << "1. To calculate the area of Square\n";
    cout << "2. To calculate  the area of Rectangle \n";
    cout << "3. To calculate  the area of Triangle \n";
}

int main()
{
    int opr = 0;
    int x = 0, y = 0;
    float z = 0;
    char ch = 'y';
    while (ch == 'y')
    {
        
        menu();
        cout<<"Choose Option";
        cin>>opr;
        switch (opr)
        {
        case 1:
            cout << "Enter the side of square ";
            cin >> x;
            cout << "Area of sqaure is " << area(x) << "\n";

            break;

        case 2:
            cout << "Enter the side of Rectangle ";
            cin >> x>>y;
            cout << "Area of Rectangle is " << area(x, y) << "\n";

            break;
        case 3:
            cout << "Enter the base and height of a triangle ";
            cin >> x >> z;
            cout << "Area of Triangle is " << area(x, z) << "\n";

            break;
        default:
        cout<<"Invalid option chosen \n";
            break;
        }
        cout<<"Do you want to run again? press y/n";
        cin>>ch;
    }

    return 0;
}