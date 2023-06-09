#include <stdio.h>
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
    printf("Total is %d \n",total);
    return 0;
}