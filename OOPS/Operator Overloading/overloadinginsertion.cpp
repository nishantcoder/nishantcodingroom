#include <iostream>
using namespace std;
 
class date
{
    int month,day,year;
       
    public:
    date(int x,int y,int z)
    {
        month=x;
        day=y;
        year=z;
    }
    friend ostream& operator<<(ostream& os,const date& dt);
}; 

ostream& operator<<(ostream& os,const date& dt)
{
    os<<dt.day<<"/"<<dt.month<<"/"<<dt.year;
    return os;
}

int main()
{
    date dt(4,1,2024);
    cout<<dt;
    
    return 0;
}