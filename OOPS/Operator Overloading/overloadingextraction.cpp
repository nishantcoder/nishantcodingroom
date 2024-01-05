#include <iostream>
using namespace std;
 
class date
{
    int month,day,year;
       
    public:
    date()
    {

    }
    void display()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
    friend istream& operator>>(istream& is,date& dt);
}; 

istream& operator>>(istream& is,date& dt)
{
    cout<<"Enter Day,month,year\n";
    is>>dt.day;
    is>>dt.month;
    is>>dt.year;
    return is;
}

int main()
{
    date dt;
    cin>>dt;
    dt.display();
    return 0;
}