//basic type to class type conversion

#include <iostream>
using namespace std;

class time
{
    private:
        int hr=0;
        int min=0;
    public:
        void show(void)
        {
            cout<<hr<<" hours "<<min<<" minutes\n";
        }
        time(int t)
        {
            hr=t/60;
            min=t%60;
        }
        
};

int main()
{
    int duration=100;
    time t1=duration;
    t1.show();
    return 0;
}