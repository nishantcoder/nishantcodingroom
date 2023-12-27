#include <iostream>
using namespace std;
 
void charrep(char c='*',int n=45)
{
    for (int i = 1; i <= n; i++)
    {
        cout<<c<<" ";
    }
    
    cout<<endl;
}


int main()
{
    charrep();
    charrep('+',10);
    charrep('/');
    
    return 0;
}