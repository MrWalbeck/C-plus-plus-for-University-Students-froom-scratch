#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "Enter your Grade: ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "Excellent";
        break;

    case 'B':
        cout << "Very Good";
        break;
    case 'C':
        cout << "Good";
        break;

    case 'D':
        cout << "Poor";
        break;

    case 'F':
        cout << "Fail";
        break;

    default:
        cout << "Invalid grade entered. Please enter a grade between A and D, or F.";
    }

    return 0;
}