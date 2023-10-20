

#include <iostream>
using namespace std;


void task1()
{
	double numberFromUser;

	do
	{
		cout << "Enter the number: " << endl;
		cin >> numberFromUser;
	} while (numberFromUser != 0);
	cout << "The number equals 0. " << endl;
}
void task2()
{
	int firstNumberFromUser;
	int secondNumberFromUser;

	cout << "Enter first number: " << endl;
	cin >> firstNumberFromUser;
	cout << "Enter second number: " << endl;
	cin >> secondNumberFromUser;

	while (firstNumberFromUser > 0 && secondNumberFromUser > 0)
	{

		if (firstNumberFromUser == secondNumberFromUser)
		{
			cout << "Greatest common divisor of those two nubers is: " << firstNumberFromUser << endl;
			return;
		}

		if (firstNumberFromUser > secondNumberFromUser)
		{
			firstNumberFromUser = firstNumberFromUser - secondNumberFromUser;
		}
		else
		{
			secondNumberFromUser = secondNumberFromUser - firstNumberFromUser;
		}
	}
}

int main()
{
	//task1();
	task2();
}

