#include<iostream>
using namespace std;
int main() {
float lbs;
float kgs;
cout<<"Enter weight in pounds: ";
cin>>lbs;
kgs = lbs/2.205;
cout<<lbs<<" pounds is equal to "<< kgs<<" kilograms"<<endl;
return 0; 
}