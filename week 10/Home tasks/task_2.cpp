#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;
string volume_of_pyramid(double Length, double Width, double Height, string Units){
    double vol = (Length * Width * Height) / 3.0;
    if (Units == "milimetres") {
        vol *= 1e9;  
    } else if (Units == "centimetres") {
        vol *= 1e6;  
    } else if (Units == "kilometres") {
        vol *= 1e-9; 
    }
        ostringstream formatted_Output;
    formatted_Output << fixed << setprecision(3) << vol << " cubic " << Units;
    return formatted_Output.str();
}
    int main() {
    double base_Length, base_Width, base_Height;
    string desired_unit;
    cout << "Input base length, width, and height (in meters): ";
    cin >>base_Length, base_Width, base_Height;
    cout << "Input desired unit (millimetres, centimetres, metres, kilometres): ";
    cout << volume_of_pyramid(base_Length, base_Width, base_Height, desired_unit) << endl;
    return 0;
}