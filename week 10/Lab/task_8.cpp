#include <iostream>
#include <conio.h>
using namespace std;
bool isSymmetrical(int number);
int main(){
    int number;
    cout << "Enter a 3-digit number: ";
    cin >> number;
    if (number < 100 || number > 999)
    {
        cout << "Please enter 3 digits!" << endl;
    }
    else
    {
        if (isSymmetrical(number))
        {
            cout << number << " is symetrical " << endl;
        }
        else
        {
            cout << number << " is not symetrical " << endl;
        }
    }
    getch();
    return 0;
}
bool isSymmetrical(int number){
        int last_dig = number % 10;
    int first_dig = number / 100;
    if (first_dig == last_dig)
    {
        return true;
    }
    else
    {
        return false;
    }
}