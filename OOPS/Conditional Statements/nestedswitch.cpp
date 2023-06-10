#include <iostream>
using namespace std;
int main()
{
    int options;
    cout << "1. Arithmatic operations\n2. Marks Calculations\n";
    cout << "Enter Choice :\t";
    cin >> options;

    switch (options)
    {
    case 1:
        int choice;
        cout << "1.Addition\n2.Subtraction\n3.Product\n4.Division\n5.Modulus\n";
        cout << "Enter your choice\t:";
        cin >> choice;
        int num_1, num_2;
        cout << "Enter two numbers\n";
        cin >> num_1 >> num_2;
        switch (choice)
        {
        case 1:
            cout << "The addition of " << num_1 << " and " << num_2 << " is " << num_1 + num_2;
            break;
        case 2:
            cout << "The Subtraction of " << num_1 << " and " << num_2 << " is " << num_1 - num_2;
            break;
        case 3:
            cout << "The product of " << num_1 << " and " << num_2 << " is " << num_1 * num_2;
            break;
        case 4:
            cout << "The division of " << num_1 << " and " << num_2 << " is " << (float)num_1 / num_2;
            break;
        case 5:
            cout << "The modulus of " << num_1 << " and " << num_2 << " is " << num_1 % num_2;
            break;

        default:
            cout << "Please Enter correct choice!";
            break;
        }
        break;
    case 2:
        int marks;
        cout << "Enter the marks ";
        cin >> marks;
        if (marks >= 50)
        {
            if (marks >= 75 && marks <= 90)
            {
                cout << "Distinction";
            }
            else
            {
                cout << "Passed";
            }
        }
        else
        {
            cout << "Passed Under Regulations";
        }
        break;
    default:
        cout << "Please Enter correct choice";
        break;
    }

    return 0;
}
