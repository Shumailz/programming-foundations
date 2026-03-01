#include<iostream>
using namespace std;
int main() {
int win;
int draw;
int loss;
int total;
cout<<"Enter the number of wins: ";
cin>>win;
cout<<"Enter the number of draws: ";
cin>>draw;
cout<<"Enter the number of losses: ";
cin>>loss;
total = 3*win+ 1*draw+ 0* loss;
cout<<"Pakistan has obtained " <<total<<" in Asia cup tournament"<<endl;
return 0;
}
