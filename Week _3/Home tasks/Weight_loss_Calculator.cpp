#include<iostream>
using namespace std;
int main() {
string name;
double target,days;
cout<<"Enter the name of the person: ";
cin>>name;
cout<<"Enter the target weight loss in kilograms: ";
cin>>target;
days = 15 * target;
cout<<name<<" will need "<<days<<" days to lose "<<target<<" kg of weight by following doctor's suggestions. "<<endl;
return 0;
}
