#include <iostream>
using namespace std;
float tax_calculator(char type, float price) {
    float tax_rate = 0.0;
        switch(type) {
        case 'A': tax_rate = 6.0; break;
        case 'B': tax_rate = 8.0; break;
        case 'C': tax_rate = 10.0; break;
        case 'D': tax_rate = 12.0; break;
        case 'E': tax_rate = 15.0; break;
        default: 
            cout << "It is an invalid vehicle type!" << endl;
            return price;
    }
        float tax_amount = price * (tax_rate / 100.0);
    float final_price =price + tax_amount;
    return final_price;
}
int main() {
    char vehicle_type;
    float vehicle_price;
    cout << "Enter the vehicle type code (A, B, C, D, E): ";
    cin >> vehicle_type;
    cout << "Enter the price of the vehicle: ";
    cin >> vehicle_price;
        float final_result = tax_calculator(vehicle_type, vehicle_price);
        cout << "The final price of a vehicle of the ype " << vehicle_type 
         << " After the  addition of the tax is $" << final_result << "." << endl;
    return 0;
}