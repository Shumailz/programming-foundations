#include<iostream>
using namespace std;
int main() {
int number_1,number_2;
cout<<"Enter the first number: ";
cin>>number_1;
cout<<"Enter the second number: ";
cin>>number_2;
if(number_1>number_2){
cout<<"Number "<<number_1<<" is greater than "<<number_2;
} else{
cout<<"Number "<<number_2<<" is greater than "<< number_1;
}
}