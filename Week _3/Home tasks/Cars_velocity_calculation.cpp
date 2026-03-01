#include<iostream>
using namespace std;
int main() {
int initialvelocity;
int acceleration;
int time;
int finalvelocity;
cout<<"Enter initial velocity(m/s): ";
cin>>initialvelocity;
cout<<"Enter Acceleration(m/s^2): ";
cin>>acceleration;
cout<<"Enter time taken: ";
cin>>time;
finalvelocity=initialvelocity+(acceleration*time);
cout<<"Final velocity(m/s):"<<finalvelocity<<endl;
return 0;
}
