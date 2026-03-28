#include <iostream>
using namespace std;
int main() {
    int quarters, dimes, nickels, pennies;
    float bill, paid;
    cout << "Enter number of quarters dimes nickels and pennies: ";
    cin >> quarters >> dimes >> nickels >> pennies;
    cout << "Enter the total amount to pay: ";
    cin >> bill;
    paid = quarters * 0.25 + dimes * 0.10 + nickels * 0.05 + pennies * 0.01;
    if(paid >= bill)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}