#include <iostream>
using namespace std;
int main()
{
    string name;
    int salary;
    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter your Salary: ";
    cin >> salary;
    if (salary < 10000)
    {
        cout << "Hello " << name << "! Your net payable amount is " << salary;
    }
    else if (salary >= 10000 && salary < 20000)
    {
        cout << "Hello " << name << "! Your net payable amount is " << salary - 1000;
    }
    else
    {
        cout << "Hello " << name << "! Your net payable amount is " << salary - (salary * 0.07);
    }
}