#include <iostream>
using namespace std;
int main() {
    char text[200];
    cout << "Enter a sentence: ";
    cin.getline(text, 200);
    for(int k = 0; text[k] != '\0'; k++) {
        if(text[k] == 'a' || text[k] == 'e' || text[k] == 'i' || 
           text[k] == 'o' || text[k] == 'u' ||
           text[k] == 'A' || text[k] == 'E' || text[k] == 'I' || 
           text[k] == 'O' || text[k] == 'U') {
            continue;
        }
        cout << text[k];
    }
    cout << endl;
    return 0;
}