#include <iostream>
using namespace std;
float Balance_calculation(float Balance, int Years) {
    float Interest_rate = 0.0;
    if (Balance < 10000) 
    {
        Interest_rate = 0.05; 
    } else if (Balance >= 10000 && Balance <= 50000) 
    {
        Interest_rate = 0.07;
    } else
     {
        Interest_rate = 0.10;
    }
    if (Years >= 3)
     {
        Interest_rate += 0.02; 
    }
    return Balance + (Balance * Interest_rate);
}
int main() 
{
    float Balance;
    int Years;
    cout << "Enter Balance and Years:" << endl;
    cin >> Balance >> Years;
    cout << "Updated Balance: " << Balance_calculation(Balance, Years) << endl;
    return 0;
}