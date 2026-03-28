#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the number of elements you want to store :  ";
    cin>>size;
    int a[size];
    cout<<"Enter "<<size<<" numbers :"<<endl;
    for(int k=0;k<size;k++){
       cin>>a[k];
    }
    int total =0;
    for(int k=0; k<size;k++){
        total =total + a[k];
    }
    cout<<"Sum of all elements : "<<total;
    return 0;
}