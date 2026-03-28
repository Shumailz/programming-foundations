#include <iostream>
using namespace std;
int main() {
    int size, numbers[100];
    cout << "Enter size: ";
    cin >> size;
    for(int j = 0; j < size; j++) {
        cin >> numbers[j];
    }
    for(int j = size - 1; j >= 0; j--) {
        cout << numbers[j] << " ";
    }
    return 0;
}