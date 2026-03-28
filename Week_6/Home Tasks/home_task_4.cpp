#include<iostream>
#include<string>
using namespace std;
int main(){
    string students[6];
    cout<<"Enter names of 5 students : "<<endl;
    for(int k=0; k<5;k++){
        getline(cin,students[k]);
    }
    cout<<"Students Names are : "<<endl;
    for(int k=0;k<5;k++){
       cout<<students[k]<<endl;
    }
    return 0;
}