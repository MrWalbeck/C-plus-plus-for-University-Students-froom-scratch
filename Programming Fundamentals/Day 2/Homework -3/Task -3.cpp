#include <iostream>
using namespace std;

int main()
{
    char op;
    int num1, num2;

    cout << "Enter your 1st Value: ";
    cin >> num1;

    cout << "Enter Operator (+ - * /): ";
    cin >> op;

    cout << "Enter your 2nd Value: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        else
            cout << "Division by zero is not allowed!";
        break;

    default:
        cout << "You Entered Invalid Operator!";
    }

    return 0;
}
