#include<iostream>
using namespace std;
int main() {
int n;
int width;
int height;
int walls_painted;
cout<<"Enter paint area: ";
cin>>n;
cout<<"Enter width: ";
cin>>width;
cout<<"Enter height: ";
cin>>height;
walls_painted=n/(width*height);
cout<<"Walls painted = "<<walls_painted<<endl;
return 0 ;
}
