#include<iostream>
using namespace std;
int main() {
string name;
int matric;
int intermediate;
int Ecat;
float aggregate;
cout<<"Enter your name: "<<endl;
cin>>name;
cout<<"Enter your matric marks (out of 1100): "<<endl;
cin>>matric;
cout<<"Enter your intermediate marks(out of 550): "<<endl;
cin>>intermediate;
cout<<"Enter your Ecat marks(out of 400): "<<endl;
cin>>Ecat;
aggregate = 0.1 *matric/11 + 0.4*intermediate/5.5 +0.5* Ecat/4;
cout<<"Aggregate score for "<< name<< " is "<<aggregate<< " %"<<endl;
return 0;
}
