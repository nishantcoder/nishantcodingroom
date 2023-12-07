#include <iostream>
using namespace std;
 
void convert(int dec)
{
    int hold=dec;
    int count=0,zero=0;
    int rem=0,binr=0,binrem=0,bin=0;

    int ary[100]={0},biny[100]={0};
    
    do
    {
        rem=hold%2;
        hold=hold/2;
        //binr=binr*10+rem;
        if (rem==0)
        {
            cout<<zero;
            ary[count]=0;
            
        }
        else
        {
            cout<<rem;
            ary[count]=rem;
        }
        count++;
    }
    while(hold!=0);
    int j=0;
    for (int i = count; i >=0; i--)
    {
        biny[j]=ary[count];
    }
    
    
 /*   while (binr!=0)
    {
        binrem=binr%10;
        binr=binr/10;
        if (binrem==0)
        {
            cout<<zero;
        }
        else
        cout<<binrem;
        
    }
    */
    cout<<bin;
    
    
}


int main()
{
    convert(20);
    
    return 0;
}