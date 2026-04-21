#include<iostream>
using namespace std;
int first_value = 10;
int second_value = 20;
int sum ()
{
    first_value = 40;
    return first_value + second_value;
}
int main()
{
    int a = first_value;
    first_value = 100;
    a = 20;
    second_value = sum();
    cout<<first_value<<" "<<second_value;
} 