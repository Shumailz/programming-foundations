#include <iostream>
using namespace std;
int main(){
int table = 5;
int multiple;
for (int number = 1; number <= 10; number = number + 1)
{
 multiple = table * number;
cout << table << " * " << number << " = " << multiple << endl;
}
}
