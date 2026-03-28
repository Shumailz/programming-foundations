#include <iostream>
using namespace std;
int main() {
    char string[50];
    cout << "Enter string: ";
    cin >> string;
    for(int i = 0; string[i] != '\0'; i++) {
        if(string[i] == 'z')
            string[i] = 'a';
        else
            string[i] = string[i] + 1;
    }
    cout << string;
    return 0;
}