#include<iostream>
using namespace std;
int main() {
double password;
cout<<"Enter the password: ";
cin>>password;
if(password==1234){
cout<<"Wow! you have cracked the code! ";
} else{
cout<<"It is not that simple, Try again! ";
}
}