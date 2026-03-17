
#include<iostream>
using namespace std;
int main(){
    float money,expense=0;
    int year;
    cout<<"Enter Money: ";
    cin>>money;
    cout<<"Enter Year: ";
    cin>>year;
    for(int x=1800;x<=year;x++)
    {
        int age=18+(x-1800);
        if(x%2==0)
        {
        expense=expense+12000;
        }
        else
        {
        expense=expense+(12000+50*age);
        }
    }
    if(money>=expense)
    {
    cout<<"Yes! He will live a care free life and will have "<<money-expense<<" dollars left.";
    }
    else
    {
    cout<<"He will need "<<expense-money<<" dollars to survive.";
    }
}
