#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double salary, percent, years, all_salary;
    bool higher_education, boss, aspirant;

    cout << "Enter salary: ";
    cin >> salary;


    cout << "Enter year: ";
    cin >> years;


    cout << "Higher education (0 or 1): ";
    cin >> higher_education;
    cout << "Boss (0 or 1): ";
    cin >> boss;
    cout << "Aspirant (0 or 1): ";
    cin >> aspirant;

    percent = ((years>=6)? 15: 10) + (boss? 10:0) + (higher_education? 5:0) + (aspirant? 12:0);

    cout << "Percent: " << percent << "%" << endl;

    all_salary = salary * (1 + (percent/100));

    cout << "All salary: $" << all_salary << endl;

    return 0;
}