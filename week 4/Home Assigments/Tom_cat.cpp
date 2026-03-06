#include<iostream>
using namespace std;
int main() {
    int working_days,Holidays,diff_from_current_years_norm;
    cout<<"Holidays: ";
    cin>>Holidays;
    working_days=365-Holidays;
    double time_for_games;
    time_for_games=working_days*63+Holidays*127;
    diff_from_current_years_norm=30000-time_for_games;
    int hours=diff_from_current_years_norm/60;
    int minutes=diff_from_current_years_norm%60;
    if(time_for_games<=30000){
        cout<<"Tom sleeps well "<<endl;
        cout<<hours<<" Hours and "<<minutes<<" minutes less for play"<<endl;
    }
    else if(time_for_games>30000){
        cout<<"Tom will run away"<<endl;
        cout<<hours<<" Hours and "<<minutes<<" minutes more for play"<<endl;

    }
    return 0;
}