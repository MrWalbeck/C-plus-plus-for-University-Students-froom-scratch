	#include <iostream>
	using namespace std;
	int main()
	{
		float eng, math, comp, phy, is, total, percentage;
		
		cout<<"Enter your English marks:";
		 cin >> eng;
		cout<<"Enter your Math marks:";
		 cin >> math;
		cout<<"Enter your Computer marks:";
		 cin >> comp;
		cout<<"Enter your Physics marks:";
		 cin >> phy;
		cout<<"Enter your Islamiyat marks:";
		 cin >> is;
		
		total = eng + math + comp + phy + is;
		percentage =  (total/500) * 100;
		
		if(percentage>80)
		 {
		 	cout<<"Your Grade is A!";
		 }
		else if(percentage>70)
		 {
		 	cout<<"Your Grade is B!";
		 }
		else if(percentage>60)
		 {
		 	cout<<"Your Grade is C!";
		 }
		else if(percentage>50)
		 {
		 	cout<<"Your Grade is D!";
		 }
		else 
		 {
			cout<<"Your Grade is F!";
		 }
	}
