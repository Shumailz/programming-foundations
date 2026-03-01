#include<iostream>
using namespace std;
int main() {
int age;
int moves;
int average_years;
cout<<"Enter the person's age: ";
cin>>age;
cout<<"Enter the number of time they've moved: ";
cin>>moves;
average_years=age/(moves+1);
cout<<"Average number of years lived in the same house  = "<<average_years<<endl;
return 0;
}
