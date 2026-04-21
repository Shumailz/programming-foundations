#include <iostream>
using namespace std;
int factorial(int digits) 
{
    int fact = 1;
    for (int i = 1; i <= digits; i++) {
        fact *= i;
    }
    return fact;
}
bool isStrong(int num)
 {
    int original_number = num;
    int Factorial_sum = 0;
    while (num > 0) {
        int digits = num % 10;
        Factorial_sum += factorial(digits);
        num /= 10;
    }
    return Factorial_sum == original_number;
}
int main() 
{
    int num;
    cin >> num;
    if (isStrong(num)) {
        cout << "It is a strong Number" << endl;
    } else {
        cout << "It is not a Strong Number" << endl;
    }
    return 0;
}