#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int a[n];
    cout<<"Enter "<< n <<" numbers : "<<endl;
    for(int k=0;k<n;k++){
        cin>>a[k];
    }
    int max_n = a[0];
    int min_n = a[0];
    for(int k=0;k<n;k++){
        if(a[k] > max_n){
            max_n = a[k];
        }
        else{
            min_n = a[k];
        }
    }
    cout<<"Largest Number : "<<max_n<<endl;
    cout<<"Smallest Number : "<<min_n;
    return 0;
}