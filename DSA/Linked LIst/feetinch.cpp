#include <iostream>
using namespace std;
struct distance
{
    int feet;
    int inch;
};

struct distance add(struct distance dd1, struct distance dd2)
{
    struct distance dd3;
    dd3.feet = 0;
    dd3.inch = 0;
    dd3.inch = dd1.inch + dd2.inch;
    while (dd3.inch >= 12)
    {
        if (dd3.inch >= 12)
        {
            dd3.feet++;
            dd3.inch = dd3.inch - 12;
        }
    }
    dd3.feet = dd3.feet + dd1.feet + dd2.feet;
    return (dd3);
}

int main()
{
    struct distance d1, d2, d3;
    cout << "enter the value of feet" << endl;
    cin >> d1.feet;
    cin >> d2.feet;
    cout << "enter the value of inch" << endl;
    cin >> d1.inch;
    cin >> d2.inch;

    d3 = add(d1, d2);

    cout << "After addition the value of feet is " << d3.feet << endl;
    cout << "After addition the value of inch is " << d3.inch << endl;
}