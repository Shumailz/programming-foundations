#include<iostream>
using namespace std;
int main() {
int Red_rose,white_rose,Tulips,sum;
double discount,Price_after_discount;
cout<<"Enter the number of red flowers: ";
cin>>Red_rose;
cout<<"Enter the number of white flowers: ";
cin>>white_rose;
cout<<"Enter the number of tulips: ";
cin>>Tulips;
sum=Red_rose*2+white_rose*4.10+Tulips*2.50;
if(sum>200){
discount=sum*0.2;
Price_after_discount=sum-discount;
cout<<"Orignal price: "<<sum<<endl;
cout<<"Price after discount: "<<Price_after_discount;
}else{
    cout<<"Orignal Price: "<<sum;
}
}