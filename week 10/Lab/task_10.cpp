#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
string time_travel(int h, int m);
int main(){
    int current_hours, current_minutes;
    cout << "Enter current hours (0-23): ";
    cin >> current_hours;
    cout << "Enter current minutes (0-59): ";
    cin >> current_minutes;
    cout << "Arrival Time: " << time_travel(current_hours, current_minutes) << endl;
    getch();
    return 0;
}
string time_travel(int h, int m) {
    m = m + 15;
    if (m >= 60) {
        m = m - 60; 
        h = h + 1;
    }
    if (h >= 24) {
        h = 0; 
    }
    string result = to_string(h) + ":" + to_string(m);
    return result;
}