#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" numbers : "<<endl;
    for(int k=0;k<n;k++){
        cin>>a[k];
    }
    int even = 0;
    for(int k=0;k<n;k++){
        if (a[k]%2 == 0){
          even = even +1;
        }
    }
    cout<<"Total Even Numbers : "<< even<<endl;
}