#include<iostream>
using namespace std;
int main() {
double Temperature_city_1,Temperature_city_2;
cout<<"Enter temperature city 1: ";
cin>>Temperature_city_1;
cout<<"Enter temperature city 2: ";
cin>>Temperature_city_2;
double Temp_difference = Temperature_city_1-Temperature_city_2;
if(Temp_difference>10){
    cout<<"Difference is too big "<<endl;
    cout<<"Program Ends ";
}
return 0;
}