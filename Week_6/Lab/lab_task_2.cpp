#include <iostream>
using namespace std;
int main() {
    char string[50];
    int len = 0;
    cout << "Enter string: ";
    cin >> string;
    while(string[len] != '\0') {
        len++;
    }
    for(int i = len - 1; i >= 0; i--) {
        cout << string[i];
    }
    return 0;
}