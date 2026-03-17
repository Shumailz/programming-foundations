
#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter any Positive Number: ";
    cin>>number;
    while(number<=0)
    {
        cout<<"Error: "<<number<<" is not a Positive Number."<<endl;
        cout<<"Please enter any Positive Number: "<<endl;
        cin>>number;
    }
     cout<<"Program ends";
}
