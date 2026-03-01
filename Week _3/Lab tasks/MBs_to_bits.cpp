#include<iostream>
using namespace std;
int main() {
int mb;
float result;
cout<<"Enter the size in megabytes (MB): " ;
cin>>mb;
result = mb * 1024 * 1024* 8;
cout<<mb<<" MB is equivalent to "<<result<<" bits"<<endl;
return 0 ;
} 
