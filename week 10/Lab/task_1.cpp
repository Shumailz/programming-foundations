#include<iostream>
using namespace std;
void add(int num_1, int num_2)
{
    cout<<"Sum: " << num_1 + num_2;
}
int main(){
    int number1,number2;
    cout<< "Enter Number 1: ";
    cin >> number1;
    cout<< "Enter number 2: ";
    cin>>number2;
    add(number1, number2);
    return 0;
}