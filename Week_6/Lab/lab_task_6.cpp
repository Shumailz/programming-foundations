#include <iostream>
using namespace std;
int main() {
    int how_many, list[100];
    cout << "Enter how many numbers: ";
    cin >> how_many;
    for(int k = 0; k < how_many; k++) {
        cin >> list[k];
    }
    int biggest = list[0];
    for(int k = 1; k < how_many; k++) {
        if(list[k] > biggest) {
            biggest = list[k];
        }
    }
    cout << "Largest number is " << biggest << endl;
    return 0;
}