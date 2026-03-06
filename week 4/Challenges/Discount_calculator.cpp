#include<iostream>
using namespace std;
int main() {
double bill,amount,discount;
cout<<"Enter your bill: ";
cin>>amount;
if(amount<=5000){
discount=0.05 * amount;
bill=amount-discount;
cout<<"Your discounted bill is: "<<bill;
}else{
discount =0.1*amount;
bill=amount-discount;
cout<<"Your discounted bill is: "<<bill;
}
}
