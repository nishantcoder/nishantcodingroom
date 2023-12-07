#include <iostream>
using namespace std;
 
void hanoi(int n,char _fromrod,char _torod,char _aux_rod)
{
    if (n==0)
    {
        return;
    }
    hanoi(n-1,_fromrod,_aux_rod,_torod);
    cout<<"Move disk "<<n<<" From rod "<<_fromrod<<" to rod "<<_torod<<endl;
    hanoi(n-1,_aux_rod,_torod,_fromrod);
    
}


int main()
{
    int N=3;
    hanoi(N,'N','S','J');
    
    
    return 0;
}