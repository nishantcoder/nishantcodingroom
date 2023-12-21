/*
PYQ 2020 Question number 5 (b) BEU/AKU 
Class to represent a bank
*/

#include <iostream>
using namespace std;
#define limit 2
class bank
{
    string name,ac_type;
    int account_no;
    double balance=0.0;


    public:
        bank()
        {

        }
        bank(string cus_name,string ac_typ,int ac_num,double bal)
        {
            name=cus_name;
            ac_type=ac_typ;
            account_no=ac_num;
            balance=bal;
        }

        void deposit(double);
        void withdraw(double);
        void display();

};


void bank::deposit(double amount)
{
    balance=balance+amount;
    cout<<amount<<" credited to "<<account_no<<endl;
    cout<<"Current Balance is for account "<<account_no<<" is "<<balance<<endl;
    
}

void bank::withdraw(double amount)
{
    if(amount<=balance)
    {
        balance=balance-amount;
        cout<<amount<<" debited from "<<account_no<<endl;
        cout<<"Current Balance is "<<balance<<endl;
    }
    else
        cout<<"Insufficient Funds!!"<<endl;
}

void bank::display()
{ 
    cout<<"Name    : "<<name<<endl;
    cout<<"Balance : "<<balance<<endl;
}



int main()
{
    
    bank customer[limit];
    for (int i = 0; i < limit; i++)
    {
        string name,actype;
        int acnum;
        double bal;

        cout<<"Enter Customer "<<i<<" name ";
        cin>>name;
        cout<<"Enter Account Type (SB,CC)  ";
        cin>>actype;
        cout<<"Assign Account Number ";
        cin>>acnum;
        cout<<"Enter deposit balance ";
        cin>>bal;
        customer[i]=bank(name,actype,acnum,bal);
        cout<<endl;
    }
    
    int option=0,amt=0,inx=0;
    

    char ch='y';
    while (ch=='y')
    {    cout<<"1. Deposit\n2.withdraw\n3.View Customer\n";
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"Customer Index(0-9)";
            cin>>inx;
            cout<<"Enter amount to deposit \t";
            cin>>amt;
            
            customer[inx].deposit(amt);
            break;
        case 2:
            cout<<"Customer Index(0-9)";
            cin>>inx;
            cout<<"Enter amount to withdraw \t";
            cin>>amt;
            
            customer[inx].withdraw(amt);
            break;
        case 3:
            cout<<"Customer Index(0-9)";
            cin>>inx;       
            customer[inx].display();
            break;
        default:
        cout<<"Exiting...\n";
            break;
        }
        cout<<"Do you want to run again? Press y/n    ";
        cin>>ch;
    }
    return 0;


}