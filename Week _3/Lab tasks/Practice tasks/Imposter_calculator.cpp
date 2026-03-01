#include<iostream>
using namespace std;
int main() {
int imposters;
int players;
float chance;
cout<<"Enter imposters: " ;
cin>>imposters;
cout<<"Enter players: ";
cin>>players;
chance=100 * imposters/players;
cout<<"Chance: "<<chance<< " %"<<endl;
return 0;
}
