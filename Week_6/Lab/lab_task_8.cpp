#include <iostream>
using namespace std;
int main() {
    int first[2], second[100], size;
    cout << "Enter two numbers: ";
    cin >> first[0] >> first[1];
    cout << "Enter how many numbers for the second list: ";
    cin >> size;
    for(int k = 0; k < size; k++) {
        cin >> second[k];
    }
    cout << first[0] << " ";
    for(int k = 0; k < size; k++) {
        cout << second[k] << " ";
    }
    cout << first[1] << endl;
    return 0;
}