#include<iostream>
using namespace std;
int main() {
  double length,height,radius,area;
  string shape;
  cout<<"Enter the figure: ";
  cin>>shape;
  if(shape=="square"){
    cout<<"Enter length: ";
    cin>>length;
    area=length*length;
    cout<<"area: "<<area;
  }
  else if(shape=="rectangle"){
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter width: ";
    cin>>height;
    area=length*height;
    cout<<"area: "<<area;
  }
  else if(shape=="circle"){
    cout<<"Enter radius: ";
    cin>>radius;
    area=3.14*radius*radius;
    cout<<"area: "<<area;
  }
  else if(shape=="triangle"){
    cout<<"Enter base: ";
    cin>>length;
    cout<<"Enter height: ";
    cin>>height;
    area=0.5*length*height;
    cout<<"area: "<<area;
  }
  else{
    cout<<"Invalid shape entered! ";
  }
  return 0;
}
