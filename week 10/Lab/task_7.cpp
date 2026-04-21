#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
void calculateRoots(double a, double b, double c);
int main(){
    double a, b, c; // Using double for better precision in math
    cout << "Enter the coefficient of the  quadratic term (a): ";
    cin >> a;
    cout << "Enter the coefficient of the  linear term (b): ";
    cin >> b;
    cout << "Enter the constant term (c): ";
    cin >> c;
    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be 0)." << endl;
    } else {
        calculateRoots(a, b, c);
    }

    cout << "\nPress any key to exit...";
    getch();
    return 0;
}
void calculateRoots(double a, double b, double c) {
    double determ = pow(b, 2) - (4 * a * c);
    cout << "------------------------------------" << endl;
        if (determ == 0) {
        // Case 1: One real root
        float x = -b / (2 * a);
        cout << "Discriminant is zero.So, One real solution:" << endl;
        cout << "x = " << x << endl;
    }
    else if (determ > 0) {
        float x1 = (-b + sqrt(determ)) / (2 * a);
        float x2 = (-b - sqrt(determ)) / (2 * a);
        cout << "Discriminant is positive.SO, Two real solutions:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else {
        float real_part = -b / (2 * a);
        float imaginary_part = sqrt(-determ) / (2 * a);
        cout << "Discriminant is negative.Therefore,complex solutions:" << endl;
        cout << "x = " << real_part << " + " << imaginary_part << "i" << endl;
        cout << "x = " << real_part << " - " << imaginary_part << "i" << endl;
    }
}