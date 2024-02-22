#include <iostream>
using namespace std;
class kriti
{
    int k;
    public:
    kriti()
    {
        k=0;

    }
    kriti(int a);
    void show();

};
kriti::kriti(int a)
{
    k=a;

}
void kriti::show()
{
    cout<<"k="<<k<<"\n";
}

int main()
{
    kriti obj;      //implicit
    obj.show();
    obj=kriti(903);     //explicit call
    obj.show();

}