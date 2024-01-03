//Demostrating the virtual Base class
/*
If the virtual keyword is not present then it will generate an ambiguity in our program 
that results in an error
*/

#include <iostream>
using namespace std;

class student
{
protected:
    int roll;

public:
    void setroll(int x)
    {
        roll=x;
    }
    
};

class theory : virtual public student
{
protected:
    int sem1;
    int sem2;

public:
    void settheory(int x,int y)
    {
        sem1=x;
        sem2=y;
    }
};

class practical : virtual public student
{
protected:
    int sem1p=0;
    int sem2p=0;

public:
    void setpract(int a,int b)
    {
        sem1p=a;
        sem2p=b;
    }
};

class final : public theory, public practical
{
public:
    void result()
    {
        cout<<"Total Marks in 1st Year for Roll  : "<<roll<<" is "<<sem1+sem2+sem1p+sem2p<<endl;
    }
};
int main()
{
    final stud1;
    stud1.setroll(40);
    stud1.settheory(563,541);
    stud1.setpract(192,143);
    stud1.result();

    return 0;
}