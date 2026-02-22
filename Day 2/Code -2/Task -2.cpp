	#include <iostream>
	using namespace std;
	int main()
	{
		int num1, num2;
		cout<<"Enter 1st value:";
			cin>>num1;
		cout<<"Enter 2nd value:";
			cin>>num2;
		
		if(num1==num2)
			{
				cout<<num1<<" is equal to "<<num2;
			}
		if(num1>num2)
			{
				cout<<num1<<" is greater than "<<num2;
			}
		if(num1<num2)
			{
				cout<<num1<<" is less than "<<num2;
			}
		if(num1!=num2)
			{
				cout<<num1<<" is not equal to "<<num2;
			}
	}
