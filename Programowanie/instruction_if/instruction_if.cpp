#include <iostream>
using namespace std;
#include <ctime>
void task()
{
	double firstNumber;
	double secondNumber;
	double quotient;
	cout << "Enter the first number: " << endl;
	cin >> firstNumber;
	cout << "Enter the second number: " << endl;
	cin >> secondNumber;
	quotient = firstNumber * secondNumber;
	cout << "Quotient score of two numbers is: " << quotient << endl;
}

//1.Program sprawdzający czy podana liczba jest parzysta czy nieparzysta
void task1()
{
	int number;
	cout << "Enter the number: " << endl;
	cin >> number;
	if (number % 2 == 0)
	{
		cout << "The number is even." << endl;
	}
	else
	{
		cout << "The number is odd." << endl;
	}
}

//2. Program sprawdzający czy podana liczba jest dodatnia, ujemna czy równa zero
void task2()
{
	int number;
	cout << "Enter the number: " << endl;
	cin >> number;
	if (number > 0)
	{
		cout << "The number is higher then 0." << endl;
	}
	else if (number == 0)
	{
		cout << "The number equal 0." << endl;
	}
	else
	{
		cout << "The number is lower then 0." << endl;
	}
}

//3. Program sprawdzający czy podany rok jest rokiem przestępnym
void task3()
{
	int year;
	cout << "Enter the year: " << endl;
	cin >> year;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		cout << "This a leap year." << endl;
	}
	else
	{
		cout << "This isn't a leap year." << endl;
	}
}

//4. Program wyświetlający odpowiedni komunikat w zależności od podanej oceny(np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
void task4()
{
	int grade;
	cout << "Enter the grade: " << endl;
	cin >> grade;
	if (grade == 6)
	{
		cout << "That is excellent grade." << endl;
	}
	else if (grade == 5)
	{
		cout << "That is very good grade." << endl;
	}
	else if (grade == 4)
	{
		cout << "That is good grade." << endl;
	}
	else if (grade == 3)
	{
		cout << "That is average grade." << endl;
	}
	else if (grade == 2)
	{
		cout << "That is very acceptable grade." << endl;
	}
	else if (grade == 1)
	{
		cout << "That is failing grade." << endl;
	}
	else {
		cout << "This isn't grade in the range 1-6." << endl;
	}
}

//5. Program sprawdzający czy podane hasło jest poprawne(np.jeśli hasło jest "abc123",
//  program powinien wyświetlić "hasło poprawne", jeśli jest inne, powinien wyświetlić "hasło niepoprawne").
void task5()
{
	string password;
	cout << "Enter the password: " << endl;
	cin >> password;
	if (password == "abc123")
	{
		cout << "Password is correct." << endl;
	}
	else
	{
		cout << "Passowrd isn't correct." << endl;
	}
}

//6. Program sprawdzający czy podana data jest poprawna(np.sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
void task6()
{
	int day;
	int month;
	int year;
	cout << "Enter the day: " << endl;
	cin >> day;
	cout << "Enter the month: " << endl;
	cin >> month;
	cout << "Enter the year: " << endl;
	cin >> year;
	if (month >= 1 && month <= 12)
	{
		if (month == 2)
		{
			if (day >= 1 && day <= 28)
			{
				cout << "Date is correct." << endl;
			}
			else
			{
				cout << "Date isn't correct." << endl;
			}
		}
		else if ((month == 4 || month == 6 || month == 9 || month == 11) && day >= 1 && day <= 30)
		{
			cout << "Date is correct." << endl;
		}
		else if (day >= 1 && day <= 31)
		{
			cout << "Date is correct." << endl;
		}
		else
		{
			cout << "Date isn't correct." << endl;
		}
	}
}

//Program wyświetlający odpowiedni komunikat w zależności od podanej temperatury
//(np. "ciepło" dla temperatury powyżej 20 stopni Celsjusza, "chłodno" dla temperatury poniżej 10 stopni Celsjusza itd.)
void task7()
{
	double temperature;
	cout << "Enter the temperature: " << endl;
	cin >> temperature;
	if (temperature > 20)
	{
		cout << "It's hot." << endl;
	}
	else if (temperature < 10)
	{
		cout << "It's cold." << endl;
	}
	else
	{
		cout << "It's an average temperature." << endl;
	}
}
int main()
{
	//task();
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	task6();
	//task7();

}



