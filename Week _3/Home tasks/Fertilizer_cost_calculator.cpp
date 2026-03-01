#include<iostream>
using namespace std;
int main() {
int weight;
int cost;
int area;
double priceperpound;
double costpersquarefoot;
cout<<" Enter the weight of the fertilizer bag in pounds: ";
cin>>weight;
cout<<"Enter the cost of the bag: $ ";
cin>>cost ;
cout<<"Enter the area in suqare feet that can be covered by the bag: ";
cin>>area;
priceperpound=cost/weight;
cout<<"Cost of fertilizing per pound: $"<<priceperpound<<endl;
costpersquarefoot=cost/area;
cout<<"Cost of fertilizing per square foor: $ "<<costpersquarefoot<<endl;
return 0;
}
