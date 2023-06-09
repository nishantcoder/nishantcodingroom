#include <iostream>
using namespace std;
struct student
{
    int eng;
    int maths;
    int science;
};
int main()
{
    int total;
    struct student std;
    std.eng=75;
    std.maths=70;
    std.science=65;
    total=std.eng+std.maths+std.science;
    cout<<"Total is "<<total;
    return 0;
}