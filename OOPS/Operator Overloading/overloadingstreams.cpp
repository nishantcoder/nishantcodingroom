#include <iostream>
using namespace std;
 
class date
{
    int month,day,year;
       
    public:
    date()
    {
        day=0;
        month=0;
        year=0;
    }
    friend istream& operator>>(istream& is,date& dt);
    friend ostream& operator<<(ostream& os,const date& dt);

}; 

ostream& operator<<(ostream& os,const date& dt)
{
    os<<dt.day<<"/"<<dt.month<<"/"<<dt.year;
    return os;
}

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
    cout<<dt;
    return 0;
}