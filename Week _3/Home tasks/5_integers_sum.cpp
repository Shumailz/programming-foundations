#include<iostream>
using namespace std;
int main() {
double current_number;
double total_sum;
total_sum =0;
cout<<"Enter 1st digit: ";
cin>>current_number;
total_sum=total_sum+current_number;
cout<<"Enter 2nd number: ";
cin>>current_number;
total_sum=total_sum+current_number;
cout<<"Enter 3rd number: ";
cin>>current_number;
total_sum=total_sum+current_number;
cout<<"Enter 4th number: ";
cin>>current_number;
total_sum=total_sum+current_number;
cout<<"Enter 5th number: ";
cin>>current_number;
total_sum=total_sum+current_number;
cout<<"The sum of these numbers is: "<<total_sum<<endl;
return 0;
}