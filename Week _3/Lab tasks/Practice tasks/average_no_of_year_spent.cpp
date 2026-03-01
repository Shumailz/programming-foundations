#include<iostream>
using namespace std;
int main() {
int age;
int moves;
int average_years;
cout<<"Enter age: ";
cin>>age;
cout<<"Enter moves: ";
cin>>moves;
average_years=age/(moves+1);
cout<<"Average years = "<<average_years<<endl;
return 0;
}
