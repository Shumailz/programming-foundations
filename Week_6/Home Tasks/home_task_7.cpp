#include<iostream>
#include<string>
using namespace std;
int main(){
    string product_names[4];
    int price[4], quantity[4];
    for(int i=0;i<4;i++){
        cout<<"Enter name of Product "<< i+1 <<" : ";
        cin>>product_names[i];
        cout<<"Enter Price of "<<product_names[i]<<" : ";
        cin>>price[i];
        cout<<"Enter quantity of "<<product_names[i]<<" : ";
        cin>>quantity[i];
    }
    cout<<"Product inventory report "<<endl;
    cout<<"--------------------------"<<endl;
    for(int i =0;i<4;i++){
        cout<<product_names[i]<<" : "<<price[i]<<" , "<<quantity[i]<<" in stock , "<<"Total Value : $"<<price[i]*quantity[i]<<endl;

    }
    return 0;
}