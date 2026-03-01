#include<iostream>
using namespace std;
int main() {
int n;
int width;
int height;
int walls_painted;
cout<<"Number of square meters you can paint: ";
cin>>n;
cout<<"Enter width of the single wall(in meters): ";
cin>>width;
cout<<"Enter height of the single wall(in meters): ";
cin>>height;
walls_painted=n/(width*height);
cout<<" Number of Walls you can paint = "<<walls_painted<<endl;
return 0 ;
}
