#include <iostream>
#include <cstring>
using namespace std;

class strng
{
    string f_name,l_name;
    string name;
    public:
        void getstr()
        {
            cout<<"Enter The first Name : ";
            cin>>f_name;
            cout<<"Enter the Last Name  : ";
            cin>>l_name;
        }
        void reverse()
        {
            int i=strlen(l_name);
            int j=strlen(f_name);
            int ind=0;
            while (i!=0)
            {
                name[ind]=l_name[i-1];
                ind++;
                i--;

            }
            name[ind]=" ";
            ind++;
            while (j!=0)
            {
                name[ind]=f_name[j-1];
                j--;
                ind++;
            }

            //printing the string after reversing it 
            cout<<"Reversed string "<<name<<endl;
        }

};

int main()
{
    strng obj;
    obj.getstr();
    obj.reverse();
    return 0;
}