#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of chords: ";
    cin >> n;
    string s[n];
    cout << "Enter " << n << " chords, one per line:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        string temp = s[i];
        int len = 0;
        while (temp[len] != '\0') {
            len++;
        }
        if (len > 0) {
            if (temp[len - 1] != '7') {
                s[i] = temp + "7";
            }
        }
    }
    cout << "Jazzified chords: [";
    for (int i = 0; i < n; i++) {
        cout << s[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}