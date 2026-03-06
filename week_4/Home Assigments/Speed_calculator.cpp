#include<iostream>
using namespace std;
int main() {
double speed;
cout<<"Enter speed: ";
cin>>speed;
if(speed<=10){
    cout<<"Slow ";   
}
else if(speed<=50 && speed>10){
    cout<<"Average ";
}
else if(speed>50 && speed<=150){
    cout<<"Fast ";
}
else if(speed>150 && speed<=1000){
    cout<<"Ultrafast ";
}
else{
    cout<<"Extremely fast" ;
}
}