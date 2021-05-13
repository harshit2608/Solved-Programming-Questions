#include<iostream>
using namespace std;
class CAccount{
    int account_no;
    float balance;
public:
    CAccount()
    {
        int AN, Bl;
        cout<<"Enter the Account No.: ";
        cin>>AN;
        cout<<"Enter the Balance: ";
        cin>>Bl;
        account_no = AN;
        balance = Bl;
    }
    void input_Transaction(char type, float value)
    {
        if(type == 'D' || type=='d')
        {
            balance += value;
        }
        else if(type == 'W'||type=='w')
        {
            if(value <= balance)
                balance -= value;
            else
                cout<<"Sorry! Low Balance";
        }
    }
    void print()
    {
        cout<<"Account Number: "<<account_no<<"\n";
        cout<<"Balance: "<<balance;
    }
};
int main()
{
  int option, value;
    char type;
    cout<<"\t\t.....CPP Bank.....\n\n";
    cout<<"1. Transaction \n2. Balance \n3. Exit \n\n";
    CAccount ca;
    do{
        cout<<"\nEnter a choice: ";
        cin>>option;
        switch(option)
        {
            case 1: cout<<"Enter the type of Transaction W or D: ";
                    cin>>type;
                    cout<<"\nEnter the Amount: ";
                    cin>>value;
                    ca.input_Transaction(type, value);
                    break;
            case 2: ca.print();
                    break;
            case 3: cout<<"Exiting";
                    break;
            default: cout<<"Enter a valid Option";
        }
    }while(option != 3);
    return 0;
}
