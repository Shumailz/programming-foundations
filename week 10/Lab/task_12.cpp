#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
string pool_state_calculation(int V, int P1, int P2, float H);
int main(){
    int vol, pool_1, pool_2;
    float hours;
    cout << "Enter Pool Volume (V): ";
    cin >> vol;
    cout << "Enter Pipe 1 flow rate (P1): ";
    cin >> pool_1;
    cout << "Enter Pipe 2 flow rate (P2): ";
    cin >> pool_2;
    cout << "Enter hours worker is absent (H): ";
    cin >> hours;
    cout << pool_state_calculation(vol, pool_1, pool_2, hours) << endl;
    getch();
    return 0;
}
string pool_state_calculation(int vol, int pool_1, int pool_2, float hours) {
    float Total_water = (pool_1 + pool_2) * hours;
    if (Total_water <= vol) {
        int full_pool_percent = (Total_water / vol) * 100;
        int pool_1_percent = (pool_1 * hours / Total_water) * 100;
        int pool_2_percent = (pool_2 * hours / Total_water) * 100;

        return "This pool is " + to_string(full_pool_percent) + " % full. Pipe 1: " + 
               to_string(pool_1_percent) + "%. Pipe 2: " + to_string(pool_2_percent) + "%.";
    } 
    else {
        float over_flow = Total_water - vol;
        return "For " + to_string(hours) + " hours the pool overflows with " + 
               to_string(over_flow) + " liters.";
    }
}