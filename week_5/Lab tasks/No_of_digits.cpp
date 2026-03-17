#include <iostream>
using namespace std;
int main(){
    int count=0,numbers;
    cout<<"Enter the numbers: ";
    cin>>numbers;
    while(numbers>0)
    {numbers=numbers/10;
    count=count+1;}
    cout<<"Total Numbers Of Digits is: "<<count;
}