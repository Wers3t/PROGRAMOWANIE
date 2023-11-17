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

int main()
{
	//task1();
	//task2();
}
