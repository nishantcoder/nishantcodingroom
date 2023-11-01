#include <iostream>
using namespace std;

class bank
{
    string name,ac_type;
    int account_no;
    double balance=0.0;


    public:
        void assign(string,string,int,double);
        void deposit(int,double);
        void withdraw(int,double);
        void display(int);

};

void bank::assign(string cus_name,string ac_typ,int ac_num,double bal)
{
    name=cus_name;
    ac_type=ac_typ;
    account_no=ac_num;
    balance=bal;
}

void bank::deposit(int acc,double amount)
{
    balance=balance+amount;
    cout<<amount<<" credited to "<<acc<<endl;
    cout<<"Current Balance is "<<balance<<endl;
    
}

void bank::withdraw(int acc,double amount)
{
    if(amount<=balance)
    {
        balance=balance-amount;
        cout<<amount<<" debited from "<<acc<<endl;
        cout<<"Current Balance is "<<balance<<endl;
    }
    else
        cout<<"Insufficient Funds!!"<<endl;
}

void bank::display(int acc)
{
    int found=0;
    for (int i = 0; i < 10; i++)
    {
        if (account_no==acc)
        {
            found=1;
            cout<<"Name    : "<<name<<endl;
            cout<<"Balance : "<<balance<<endl;
            break;
        }
        
    }

    if (found==0)
    {
        cout<<"Account number doesn't exist in the bank."<<endl;
    }
    
}



int main()
{
    bank customer[10];
    customer[0].assign("Nishant Raj","SB",4649,5678.98);
    customer[0].display(4649);
    customer[0].deposit(4649,6789.23);
    customer[0].withdraw(4649,67999.56);
    customer[0].withdraw(4649,4589.56);
    customer[0].display(4649);

    customer[0].assign("Nishant Raj","SB",4650,1987.98);
    customer[0].display(4650);
    customer[0].deposit(4650,6789.23);
    customer[0].withdraw(4650,67999.56);
    customer[0].withdraw(4650,4589.56);
    customer[0].display(4650);

    return 0;


}