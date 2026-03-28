#include<iostream>
using namespace std;
int main(){
    int j;
    cout<<"Enter the number of customers : ";
    cin>>j;
    string coustomer [j+1];
    cout<<"Enter the names of "<< j <<" coustomers : ";
    for(int i=0;i<j+1;i++){
       getline(cin,coustomer[i]);
    }
    char l;
    cout<<"Enter a letter to check : ";
    cin>>l;
    int count =0;
    for(int i=0;i<j+1;i++){
        if(l == coustomer[i][0]){
            count = count+1;
        }
    }
    cout<<"Total names starting with "<< l <<" : "<< count<<endl;
return 0;
}