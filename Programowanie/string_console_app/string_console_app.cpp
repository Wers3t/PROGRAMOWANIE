#include <iostream>
using namespace std;

/*
.
* Napisz program, który pobiera od użytkownika ciąg znaków i wyświetla liczbę samogłosek i spółgłosek w tym ciągu.
* Poproś użytkownika o wprowadzenie liczby całkowitej w systemie dziesiętnym. Następnie skonwertuj tę liczbę na system dwójkowy (binarny) i wyświetl wynik.
* Program sprawdzający czy podany ciąg znaków jest palindromem (czyli takim, który czytany od tyłu jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzający czy podane dwa słowa są anagramami (czyli takimi, które zawierają te same litery, ale w innym układzie, np. "klasa" i "salka")
*

* Program wyciągający informacje z numeru PESEL
* Program implementujący algorytm szyfrowania Cezara (proste szyfrowanie, w którym każdy znak w tekście jest zastępowany innym znakiem, przesuniętym o stałą liczbę pozycji w alfabecie).


* Program który na wejściu przyjmie równanie a na wyjściu da równanie w odwrotnej notacji polskiej ONP. Np. na wejściu 2+3*4 na wyjścu da 234*+
* Program, który na wejściu przyjmie rówanie w ONP a na wyjściu wyświetli wynik rówania.
*/
//napisz program ktory wczyta znak z klawiatury
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
	cout << "Enter password: " << endl;
	cin >> textFromUser;


	if (textFromUser == password)
	{
		cout << "Password is correct. " << endl;
	}
	else
	{
		cout << "Password isn't correct. " << endl;
	}
}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	task5();
}
