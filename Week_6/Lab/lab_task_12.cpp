#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the size of the array: ";
    cin >> num;
    int a[num];
    cout << "Enter " << num << " elements of the array:\n";
    for(int k = 0; k < num; k++){
        cin >> a[k];
    }
    bool check = true;
    for(int k = 0; k < num; k++){
        if(k % 2 == 0){
            if(a[k] % 2 != 0){  
                check = false;
            }
        }
        else{
            if(a[k] % 2 == 0){   
                check = false;
            }
        }
    }
    if(check){
        cout << "The array is special";
    }
    else{
        cout << "The array is not special";
    }
    return 0;
}