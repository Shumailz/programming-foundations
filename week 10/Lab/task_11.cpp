#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
string Text_conversion(int number);
int main(){
    int number;
    cout << "Enter a number between 1 and 99: ";
    cin >> number;
    if (number < 1 || number > 99) {
        cout << " It is out of range!" << endl;
    } else {
        cout << "In English: " << Text_conversion(number) << endl;
    }
    getch();
    return 0;
}
string Text_conversion(int number){
    string units[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", 
                      "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", " ninety"};
    if (number < 20) {
        return units[number];
    } 
    else {
        int tens_index = number / 10;
        int unit_index = number % 10; 
        if (unit_index == 0) {
            return tens[tens_index];
        } else {
            return tens[tens_index] + "-" + units[unit_index];
        }
    }
}