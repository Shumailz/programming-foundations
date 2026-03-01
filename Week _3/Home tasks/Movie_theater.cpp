#include<iostream>
using namespace std;
int main() {
string nameofmovie;
int adultticketprice;
int childticket;
int noofadultticketssold;
int noofchildrenticketssold;
double percentage;
int totalmoney;
int donation;
int remaining;
cout<<"Enter the name of movie: "<<endl;
cin>>nameofmovie;
cout<<"Enter the adult ticket price: $ "<<endl;
cin>>adultticketprice;
cout<<"Enter the price of child ticket: $"<<endl;
cin>>childticket;
cout<<" Enter the number of adult tickets sold: "<<endl;
cin>>noofadultticketssold;
cout<<"Enter the number of children's tickets sold: "<<endl;
cin>>noofchildrenticketssold;
totalmoney= adultticketprice*noofadultticketssold  + childticket * noofchildrenticketssold;
cout<<"Enter the percentage of total money to be donated to charity: "<<endl;
cin>>percentage;
donation= totalmoney*percentage/100;
remaining =totalmoney - donation;
cout<<"---------------------------------------------"<<endl;
cout<<"Movie: "<<nameofmovie<<endl;
cout<<"Total amount generated from ticket sales: $"<<totalmoney<<endl;
cout<<"Donation to charity( "<<percentage<< ")"<< ": "<<donation<< "$"<<endl;
cout<<"Remaining amount after donation: "<<remaining<<endl;

return 0;
}

