#include<iostream>
#include<string>
using namespace std;
int main(){
    int number_of_flights;
    int f_n[number_of_flights],seats[number_of_flights];
    string Destination;
    cout<<"Enter Number of Flights : ";
    cin>>number_of_flights;
    int flights[number_of_flights];
    for(int i =0; i<number_of_flights;i++){
        cout<<"Enter flight number for flight "<<number_of_flights+1<<": ";
        cin>>f_n[i];
        cout<<"Enter desitination for flight "<<f_n<<": ";
        cin>>Destination;
        cout<<"Enter seats available for flight "<<f_n<<": ";
        cin>>seats[i];
    }
    cout<<"Flight Information: "<<endl;
    cout<<"-----------------------------"<<endl;
     for(int i =0; i<number_of_flights;i++){
        cout<<"Flight "<<f_n<<" to "<<Destination<<" has "<<seats<<" seats availabe. "<<endl;
    }
    cout<<"Flight with less than 5 seats avaialbe: ";
    cout<<"------------------------------------------- ";
    bool found = false; 
    for(int i = 0; i < number_of_flights; i++){
        if(seats[i] < 5){
            cout << "Flight " << f_n[i] << " to " << Destination[i] << " has only " << seats[i] << " seats left!" << endl;
            found = true;
        }
    }
    if(!found){
        cout << "No flights with less than 5 seats available." << endl;
    }
    return 0;
}