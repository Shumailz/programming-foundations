#include <iostream>
using namespace std;
main()
{
int pin,current_Balance=220,after_Deposit,after_Withdraw,choice;
for(int i=1;i<=3;i+=1)
{
    cout<<"Enter THE PIN: ";
    cin>>pin;
    if(pin==1234)
    {
        cout<<"Login Successful \n\n";
        break;
    }
    else
    {
        if(i==3)
        {
            cout<<"Too Many Wrong Attempts. Program End.\n\n";
            return 0;
        }
        cout<<"Wrong PIN \n";
    }

}
for(int i=1;i<=4;i+=1)
{
    cout<<"-------ATM Menu--------\n";
    cout<<"1- Check Balance \n";
    cout<<"2- Deposit Money \n";
    cout<<"3- Withdraw Money \n";
    cout<<"4- Exit \n\n";
    cout<<"Enter Choice: ";
    cin>>choice;

if(choice==1)
{
    cout<<"Your Current Balance is: "<<current_Balance<<"\n\n";
}
else if(choice==2)
{
    int deposit_Money;
    cout<<"Enter Amount to Deposit: ";
    cin>>deposit_Money;
    after_Deposit=deposit_Money+current_Balance;
    cout<<"Your Total Amount is: "<<after_Deposit<<"\n\n";
}
else if(choice==3)
{
    int withdraw_Money;
    cout<<"Enter Amount to Withdraw: ";
    cin>>withdraw_Money;
    after_Withdraw=after_Deposit-withdraw_Money;
    cout<<"Your Total Amount is: "<<after_Withdraw<<"\n\n";
}
else if(choice==4)
{
    cout<<"Program Exit\n\n";
    break;
}    
else 
{
    cout<<"invalid Choice \n\n";
    break;
}
}
}