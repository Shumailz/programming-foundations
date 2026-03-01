#include<iostream>
using namespace std;
int main () {
int current_world_population;
int monthly_birth_rate;
int population_In_three_decades;
cout<<"Enter the current world population: ";
cin>>current_world_population;
cout<<"Enter monthly birth rate: ";
cin>>monthly_birth_rate;
population_In_three_decades=monthly_birth_rate *12*30+current_world_population;
cout<<"Population in three decades will be: "<<population_In_three_decades<<endl;
return 0;
}
