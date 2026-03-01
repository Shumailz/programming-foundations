#include<iostream>
using namespace std;
int main () {
int age_in_years;
int age_in_days;
cout<<"Enter your age in years: ";
cin>>age_in_years;
age_in_days= age_in_years*365;
cout<<"Your age is days is approximately "<<age_in_days<<" days."<<endl;
return 0;
}