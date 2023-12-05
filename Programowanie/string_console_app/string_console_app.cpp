#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void task1()
{
	string characterFromUser;
	cout << "Enter any character: " << endl;
	cin >> characterFromUser;
	cout << "Your character is: " << '"' << characterFromUser << '"' << "." << endl;
}

//napisz program ktory poprosi cie o twoje imie i cie przywita.
void task2()
{
	string nameFromUser;
	cout << "Enter your name: " << endl;
	cin >> nameFromUser;
	cout << "Hi " << nameFromUser << "." << endl;
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

//*Napisz program, który będzie prosił o hasło.Nie przepuści dalej dopóki nie zostanie ono podane prawidłowo

void task5()
{
	string password = "abc123";
	string textFromUser;




	while (true)
	{
		cout << "Enter password: " << endl;
		cin >> textFromUser;

		if (textFromUser == password)
		{
			break;
		}
		else
		{
			cout << "Password isn't correct. " << endl;

		}
	}
	cout << "Password is correct. " << endl;



}
//* Napisz program, który pobiera od użytkownika ciąg znaków i wyświetla liczbę samogłosek i spółgłosek w tym ciągu.

void task6()
{
	string vowels = "aeiouyAEIOUY";
	string textFromUser;

	cout << "Enter text: " << endl;
	cin >> textFromUser;

	for (int i = 0; i < textFromUser.length(); i++)
	{
		for (int j = 0; j < vowels.length(); j++)
		{
			if (textFromUser[i] == vowels[j])
			{
				cout << vowels[j] << " to samogloska. ";
			}
		}

		cout << endl;
	}
}
//Poproś użytkownika o wprowadzenie liczby całkowitej w systemie dziesiętnym. Następnie skonwertuj tę liczbę na system dwójkowy (binarny) i wyświetl wynik.

void task7()
{
	int number;
	string binaryNumber = "";

	cout << "Enter number: " << endl;
	cin >> number;

	do
	{
		binaryNumber = to_string(number % 2) + binaryNumber;
	} while (number != 0);
	cout << binaryNumber << endl;
}

//* Program sprawdzający czy podany ciąg znaków jest palindromem (czyli takim, który czytany od tyłu jest taki sam, jak czytany od przodu, np. "kajak")

void task8()
{
	string textPalindrome = "";
	string textFromUser;

	cout << "Enter text: " << endl;
	cin >> textFromUser;
	for (int i = textFromUser.length() -1; i >= 0; i--)
	{
		textPalindrome += textFromUser[i];
	}
	if (textFromUser == textPalindrome)
		std::cout << textFromUser << " that is palindrome.";
	else
		std::cout << textFromUser << " that isn't palindrom.";
}

// Program sprawdzający czy podane dwa słowa są anagramami (czyli takimi, które zawierają te same litery, ale w innym układzie, np. "klasa" i "salka")

void task9()
{
	string firstTextFromUser;
	string secondTextFromUser;
	string newText;
	//int x1, x2;
	//int temp;

	//temp = x1;
	//x1 = x2;
	//x2 = temp;

	cout << "Enter first word: " << endl;
	cin >> firstTextFromUser;
	cout << "Enter second word: " << endl;
	cin >> secondTextFromUser;
	cout << "Lenght of first text: " << firstTextFromUser.length() << endl;
	cout << "Lenght of second text: " << secondTextFromUser.length() << endl;

	cout << "----------------" << endl;
	if (firstTextFromUser.length()!=secondTextFromUser.length())
	{
		cout << "That isn't anagram." << endl;
		return;
	}

	sort(firstTextFromUser.begin(), firstTextFromUser.end());
	sort(secondTextFromUser.begin(), secondTextFromUser.end());

	if (firstTextFromUser == secondTextFromUser) {
		std::cout << "The entered words are anagrams." << std::endl;
	}
	else {
		std::cout << "The entered words are not anagrams." << std::endl;
	}
}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	task9();
}
