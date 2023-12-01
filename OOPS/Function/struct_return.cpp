#include <iostream>

using namespace std;

struct student
{
    int roll;
    string name;
};

student getdetails(student data)
{
    data.roll=22401;
    data.name="Bhoomi";
    return (data);
}

int main()
{
    student s1;
    s1=getdetails(s1);
    cout<<"Roll -> "<<s1.roll<<"\n";
    cout<<"Name -> "<<s1.name<<"\n";
    return 0;
}