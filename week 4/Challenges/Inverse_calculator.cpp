#include<iostream>
using namespace std;
int main() {
double first_number,second_number,result;
char opreator;
cout<<"Enter first number: ";
cin>>first_number;
cout<<"Enter the operator: ";
cin>>opreator;
cout<<"Enter second number: ";
cin>>second_number;
 if(opreator=='+'){
result = first_number - second_number;
cout<<first_number<< " - "<<second_number<<" = "<<result;
}
 if(opreator=='-'){
result=first_number+second_number;
cout<<first_number<< " + "<<second_number<<" = "<<result;
}
 if(opreator== '*'){
result=first_number/second_number;
cout<<first_number<< " // "<<second_number<< " = " <<result;
}
if(opreator=='/'){
result=first_number*second_number;
cout<<first_number<< " * "<<second_number<< " = " <<result;
}

}




