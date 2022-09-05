#include<iostream>
using namespace std;

void showMenu()
{
    cout<<"**********Menu**********"<<endl;
    cout<<"1. CheckBalance"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. End"<<endl;
    cout<<"********************"<<endl;
}

int main()
{
    // Check balance,deposit,withdraw,show menu
    int option;
    double balance=5000;
    do{
    showMenu();
    cout<<"Option: ";
    cin>>option;
    system("cls");
    switch(option)
    {
        case 1: cout<<"Balance is: "<<balance<<" $"<<endl; break;
        case 2: cout<<"Deposite amount:";
                double depositeAmount;
                cin>>depositeAmount;
                balance+=depositeAmount;
                break;
        case 3:cout<<"Withdraw amount:";
                double withdrawAmount;
                cin>>withdrawAmount;
                if(withdrawAmount<=balance)
                balance-=withdrawAmount;
                else
                cout<<"Not enough Money !"<<endl;
                break;
    }
    }while(option<4 && option>0);

    return 0;
}