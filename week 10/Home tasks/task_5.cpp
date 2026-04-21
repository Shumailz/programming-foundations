#include <iostream>
using namespace std;
float Salary_calculator(float Base, int Score, int Experience) {
    float bonus_percentage = 0.0;
    if (Score >= 90) {
        bonus_percentage = 0.20; 
    } else if (Score >= 75 && Score <= 89) {
        bonus_percentage = 0.10; 
    } else {
        bonus_percentage = 0.05; 
    }
    if (Experience >= 5) {
        bonus_percentage += 0.05;
    }
    float total_bonus = Base * bonus_percentage;
    float final_salary = Base + total_bonus;
    return final_salary;
}
int main(){
    float Base;
    int Score, Experience;
    cout << "Enter Base, Score and the Experience in years:" << endl;
    cin >> Base >> Score >> Experience;
    cout << "Final Salary: " << Salary_calculator(Base, Score, Experience) << endl;
    return 0;
}