#include<iostream>
using namespace std;
int main() {
string country_name;
int ticket_price;
double discount,discounted_price;
cout<<"Enter country name: ";
cin>>country_name;
cout<<"Enter ticket price in (USD): ";
cin>>ticket_price;
if(country_name=="Ireland"){
discount=ticket_price * 0.1;
discounted_price=ticket_price -discount;
cout<<"Discounted price: "<<discounted_price;
}
else{
discount=ticket_price*0.05;
discounted_price=ticket_price -discount;
cout<<"Discounted price: "<<discounted_price;
}
return 0;
}