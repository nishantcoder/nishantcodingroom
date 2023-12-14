#include <iostream>
using namespace std;
 
void convert(int dec)
{
    int hold=dec;
    int count=0;
    do
    {
        hold=hold/2;
        count++;
    } while (hold!=0);
    
    int arr[count+1]={0};
    for (int i = count; i >=0; i--)
    {
        arr[i]=dec%2;
        dec=dec/2;
        if (i==0)
        {
            arr[i]=0;
        }
        
    }

    for (int i = 0; i < count+1; i++)
    {

        cout<<arr[i];
    }
}


int main()
{
    cout<<"Enter the decimal value to convert in to binary form \n...>>>";
    int dec=0;
    cin>>dec;
    convert(dec);
    
    return 0;
}