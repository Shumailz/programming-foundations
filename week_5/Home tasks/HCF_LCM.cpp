
#include <iostream>
using namespace std;
int main(){
int first,second;
int x,y;
cout<<"Enter First Number: ";
cin>>first;
cout<<"Enter Second Number: ";
cin>>second;
x=first;
y=second;
while(first!=second)
{
if(first>second)
{first=first-second;}
else
{second=second-first;}
}
cout<<"HCF: "<<first<<endl;
cout<<"LCM: "<<(x*y)/first;
}
