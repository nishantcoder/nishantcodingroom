#include <iostream>
using namespace std;
 
struct scale
{
    int feet=0;
    int inch=0;
};

scale add(scale a,scale b)
{
    scale c;
    c.feet=a.feet+b.feet;
    c.inch=a.inch+b.inch;
    while (c.inch>=12)
    {
        c.feet++;
        c.inch=c.inch-12;
    }
    return c;
}


int main()
{
    scale x,y,z;
    cout<<"Enter the value of feet ";
    cin>>x.feet>>y.feet;
    cout<<"Enter the value in inches ";
    cin>>x.inch>>y.inch;
    z=add(x,y);
    cout<<z.feet<<" feet "<<z.inch<<" inches";
    
    return 0;
}