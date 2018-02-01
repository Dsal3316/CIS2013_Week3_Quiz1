#include <iostream>

using namespace std;

int main()
{

	int Num1, Num2, Num3;
	char opr;
	

	
	{

		cout << "Enter your first number";
		cin >> Num1;

		cout << "Enter your second number";
		cin >> Num2;

		cout << "Enter your Operation (+,*)";
		cin >> opr;

			if (opr == '+')
			{
				Num3=Num1+Num2;

			}
			if (opr == '*')
			{
				Num3=Num1*Num2;
			}


		cout << "Here is your solution:" << Num3;
		
	}


	return 0;
}