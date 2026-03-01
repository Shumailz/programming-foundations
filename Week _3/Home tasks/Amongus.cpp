#include<iostream>
using namespace std;
int main() {
int imposters;
int players;
float chance;
cout<<"Enter imposter count: " ;
cin>>imposters;
cout<<"Enter player count: ";
cin>>players;
chance=100 * imposters/players;
cout<<"Chance of being an imposter: "<<chance<< " %"<<endl;
return 0;
}
