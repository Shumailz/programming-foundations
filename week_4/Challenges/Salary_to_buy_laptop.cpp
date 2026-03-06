#include<iostream>
using namespace std;
int main(){
double months_required,advance_salary,months;
cout<<"Enter the money you have: ";
cin>>advance_salary;
months = advance_salary/5000;
months_required=10 - months;
if(advance_salary<50000){
cout<<"You dont have enough money to buy laptop. "<<endl;
cout<<"Months required to buy laptop: "<<months_required;
}else{
    cout<<"You have enough money to buy laptop. ";
}
}