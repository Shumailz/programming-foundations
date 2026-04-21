#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
string checkoddish_Or_evenish(int number);
int main(){
    int number;
    cout << "Enter five-digit number: ";
    cin >> number;
    if (number < 10000 || number > 99999) {
        cout << "Error! Please enter five digits." << endl;
    } else {
        string result = checkoddish_Or_evenish(number);
        cout << "The number is: " << result << endl;
    }
    getch();
    return 0;
}
string checkoddish_Or_evenish(int number) {
    int total = 0;
    int temp = number;
    for (int i = 0; i < 5; i++) {
        total = total + (temp % 10); 
        temp = temp / 10;  
    }
    if (total % 2 == 0) {
        return "Evenishh";
    } else {
        return "Oddishh";
    }
}