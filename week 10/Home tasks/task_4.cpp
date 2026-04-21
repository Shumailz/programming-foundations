#include <iostream>
#include <string>
using namespace std;
string Calculation_of_project_time(int hours_required, int Days, int Workers) {
    double working_days = Days * 0.90;
        double Total_hours = Workers * 10 * working_days;
    int Available_hours = (int)Total_hours;
        if (Available_hours >= hours_required) {
        int Hours_left = Available_hours - hours_required;
        return "Yes!" + to_string(Hours_left) + " hours left.";
    } else {
        int Hours_needed = hours_required - Available_hours;
        return "Not enough time!" + to_string(hours_required) + " hours needed.";
    }
}
int main() {
    int Needed_hours, Days, Workers;
        cin >> Needed_hours;
    cin >> Days;
    cin >> Workers;
        cout << Calculation_of_project_time(Needed_hours, Days, Workers) << endl;
    return 0;
}