
#include<iostream>
using namespace std;
int main(){
    int choice;
    int x,y;
    for(int i=1;i<=6;i++)
    {
         cout<<"1 Subtraction\n";
         cout<<"2 Addittion\n";
         cout<<"3 Division\n";
         cout<<"4 Multiplication\n";
         cout<<"5 Clear the Screen\n";
         cout<<"6 Exit\n";
         cout<<"Enter Choice: ";
        cin>>choice;
         if(choice==1)
        {
        cout<<"Enter Two Numbers: ";
        cin>>x>>y;
        cout<<"Difference = "<<x-y<<"\n\n";
        }
         else if(choice==2)
        {
        cout<<"Enter Two Numbers: ";
        cin>>x>>y;
        cout<<"Sum = "<<x+y<<"\n\n";
        }
        else if(choice==3)
        {
        cout<<"Enter Two Numbers: ";
        cin>>x>>y;
        cout<<"Product = "<<x*y<<"\n\n";
        }
        else if(choice==4)
        {
            cout<<"Enter Two Numbers: ";
            cin>>x>>y;
            if(y==0)
            {
            cout<<"Cannot divide by zero\n\n";
            }
            else
            {
            cout<<"Division = "<<x/y<<"\n\n";
            }
        }
        else if(choice==5)
        {
        cout<<"Screen cleared\n\n";
        }
        else if(choice==6)
        {
        cout<<"Exiting Calculator. Goodbye!\n";
        break;
        }
        else
        {
        cout<<"Invalid Choice\n\n";
        }
    }
}
