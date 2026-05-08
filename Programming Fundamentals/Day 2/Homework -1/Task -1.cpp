#include <iostream>
using namespace std;
int main()
{
	char op;
	int num1, num2;
	cout << "Enter your 1st Value: ";
	cin >> num1;
	cout << "Enter Operator (+ - / *:): ";
	cin >> op;
	cout << "Enter your 2nd value: ";
	cin >> num2;

	if (op == '+')
	{
		cout << "Answer: " << num1 + num2;
	}
	else if (op == '-')
	{
		cout << "Answer: " << num1 - num2;
	}
	else if (op == '*')
	{
		cout << "Answer: " << num1 * num2;
	}
	else if (op == '/')
	{
		cout << "Answer: " << num1 / num2;
	}
	else
	{
		cout << "You Enter Invalid Operator!";
	}

	return 0;
}