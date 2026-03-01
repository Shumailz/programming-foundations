#include<iostream>
using namespace std;
int main() {
int two_pointers;
int three_pointers;
int pointer;
cout<<"Enter 2 pointers: ";
cin>>two_pointers;
cout<<"Enter 3 pointers: ";
cin>>three_pointers;
pointer=3*three_pointers + 2*two_pointers;
cout<<"Total points: "<<pointer<<endl;
return 0;
}
