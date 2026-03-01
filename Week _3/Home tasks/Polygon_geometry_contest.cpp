#include<iostream>
using namespace std;
int main() {
int n;
int sum;
cout<<"Enter the total number of sides (n) of polygon: " ;
cin>>n;
sum = (n-2) * 180;
cout<<"The  total sum of all interior angles of a : "<<n<<"-sided polygon is :"<<sum<< " degrees"<<endl;
return 0;
}