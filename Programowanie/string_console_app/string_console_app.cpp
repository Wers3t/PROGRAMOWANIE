#include <iostream>
using namespace std;

//napisz program ktory wczyta znak z klawiatury
void task1()
{
	string characterFromUser;
	cout << "Enter any character: " << endl;
	cin >> characterFromUser;
	cout << "Your character is: "<<'"'<< characterFromUser <<'"'<<"." << endl;
}

//napisz program ktory poprosi cie o twoje imie i cie przywita.
void task2()
{
	string nameFromUser;
	cout << "Enter your name: " << endl;
	cin >> nameFromUser;
	cout << "Hi " << nameFromUser <<"." << endl;
}

void task3()
{
	char signFromUser;

	cout << "Enter sign: " << endl;
	cin >> signFromUser;

	cout << "You entered sign: " << signFromUser << endl;

	if (signFromUser >= 'a' && signFromUser <= 'z')
	{
		cout << "Sign is small letter. " << endl;
	}
	else
	{
		cout << "Sign is capital letter. " << endl;
	}
}

void task4()
{
	string userName;
	cout << "Enter your name: " << endl;
	cin >> userName;

	cout << "Hi " << userName << "!!" << endl;
}

int main()
{
	//task1();
	//task2();
	//task3();
	task4();
}
