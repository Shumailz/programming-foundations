#include <iostream>
#include <string>
using namespace std;
int main() {
    int total;
    cout << "How many students are there? ";
    cin >> total;
    string studentNames[total];
    cout << "\nEnter the names of students:\n";
    for(int i = 0; i < total; i++) {
        cin >> studentNames[i];
    }
    for(int i = 0; i < total - 1; i++) {
        for(int j = 0; j < total - 1 - i; j++) {
            if(studentNames[j] > studentNames[j + 1]) {
                string tempName = studentNames[j];
                studentNames[j] = studentNames[j + 1];
                studentNames[j + 1] = tempName;
            }
        }
    }
    cout << "Here are the names in alphabetical order:";
    for(int i = 0; i < total; i++) {
        cout << studentNames[i] << endl;
    }
    return 0;
}