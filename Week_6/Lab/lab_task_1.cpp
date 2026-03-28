#include <iostream>
using namespace std;
int main() {
    char word[50];
    cout << "Enter a Word: ";
    cin >> word;
    for(int i = 0; word[i] != '\0'; i++) {
        cout << word[i] << " at index " << i << endl;
    }
    return 0;
}