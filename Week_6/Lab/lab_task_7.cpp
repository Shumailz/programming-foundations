#include <iostream>
using namespace std;
int main() {
    int total;
    float resistors[100], total_Sum = 0.0;
    cout << "How many resistors do you have? ";
    cin >> total;
    for(int i = 0; i < total; i++) {
        cin >> resistors[i];
        total_Sum = total_Sum + resistors[i];
    }
    cout << "Total Resistance = " << total_Sum << endl;
    return 0;
}