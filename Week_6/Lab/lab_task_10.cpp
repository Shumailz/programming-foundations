#include <iostream>
using namespace std;
int main() {
    char text[100];
    cout << "Enter text: ";
    cin.getline(text, 100);
    cout << "something " << text;
    return 0;
}