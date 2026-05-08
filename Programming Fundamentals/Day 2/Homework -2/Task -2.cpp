#include <iostream>
using namespace std;
int main()
{
	int age, income;
	char gender;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter income: ";
	cin >> income;
	cout << "Enter gender (M/F): ";
	cin >> gender;

	if (age > 25 && gender == 'M' && income > 25000)
	{
		cout << "Sir, You are eligible for loan.";
	}
	else if (age > 30 && gender == 'F' && income > 20000)
	{
		cout << "Mam, You are eligible for loan.";
	}
	else
	{
		cout << "You are not eligible for loan.";
	}

	return 0;
}
