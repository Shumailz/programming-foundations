#include<iostream>
using namespace std;
int main() {
float vegetablepriceperkg;
float fruitpriceperkg;
int totalkgofvegetables;
int totalkgoffruits;
float totalcoinsofvegetable;
float totalcoinsoffruits;
float totalcoins;
float rps;
cout<<"Enter vegetable price per kilogram(in coins): ";
cin>>vegetablepriceperkg;
cout<<"Enter fruit price per kilogram(in coins): ";
cin>> fruitpriceperkg;
cout<<"Enter total kilograms of vegetables: ";
cin>>totalkgofvegetables;
cout<<"Enter total kilograms of fruits: ";
cin>>totalkgoffruits;
totalcoinsofvegetable = vegetablepriceperkg * totalkgofvegetables;
totalcoinsoffruits =  fruitpriceperkg * totalkgoffruits;
totalcoins=totalcoinsofvegetable + totalcoinsoffruits;
rps = totalcoins/1.94;
cout<<"Total earning in Rupees (Rps): "<<rps<<endl;
return 0;
}



