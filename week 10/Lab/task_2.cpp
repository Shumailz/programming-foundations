#include <iostream>
using namespace std;
int myFunction(int num){
    int total;
    total = num * 5;
    return total;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = myFunction(num);
    cout << "Total: " << result << endl;
    return 0;
}