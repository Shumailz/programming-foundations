#include <iostream>
using namespace std;
int main() {
    int total, values[100];
    cout << "Enter total: ";
    cin >> total;
    for(int pos = 0; pos < total; pos++) {
        cin >> values[pos];
        for(int prev = 0; prev < pos; prev++) {
            if(values[pos] == values[prev]) {
                cout << "Already Entered\n";
                break;
            }
        }
    }  
    return 0;
}