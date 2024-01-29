#include <iostream>
using namespace std;
 
class error
{
    private:
        int code;
       
    public:
    error()
    {
        code=0;
    }
    error(int a):code(a){}

    void err_dis()
    {
        cout<<"\nError code  "<<code<<"\n";
    }

    
};


int main()
{
    try
    {
        cout<<"testing exception\n";
        throw error(8);
    }
    catch(error e)
    {
        cout<<"Error caught successfully.";
        e.err_dis();
    }
    
    
    return 0;
}

/*
testing exception
Error caught successfully.
Error code  8
*/