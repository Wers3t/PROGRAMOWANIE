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
	bool  isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	if	(
		day < 1 || day >31 || month < 1 || month > 12
		|| (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11))
		|| (month ==2 && day >29)
		||(month ==2 && day ==29 && !isLeapYear)
		)
	{
		cout << "The date isn't correct. " << endl;	
		return;
	}	
	cout << "Date is correct." << endl;
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
//8. Program sprawdzjący czy podana liczba jest z przediału <1;15)
void task8()
{
	double number;
	cout << "Enter the number: " << endl;
	cin >> number;
	if (number >= 1 && number <= 15)
	{
		cout << "The number is in the range from 1 to 15." << endl;
	}
	else
	{
		cout << "The number isn't in the range." << endl;
	}
}
//9. Program sprawdzający czy osoba jest pełnoletnia.
void task9()
{
	int personAge;
	cout << "Enter the age: " << endl;
	cin >> personAge;
	if (personAge >= 18)
	{
		cout << "The person is an adult." << endl;
	}
	else if (personAge < 18 && personAge>0)
	{
		cout << "The person is a minor." << endl;
	}
	else
	{
		cout << "The age isn't correct. " << endl;
	}
}
//10. Program, który sprawdzi czy z podanych długości boków można zrobić trójkąt.
void task10()
{
	double a;
	double b;
	double c;
	cout << "Enter first side of triangle: " << endl;
	cin >> a;
	cout << "Enter second side of triangle: " << endl;
	cin >> b;
	cout << "Enter third side of triangle: " << endl;
	cin >> c;
	if ((a + b > c) && (b + c > a) && (c + a > b))
	{
		cout << "From those sides you can make a triangle." << endl;
	}
	else
	{
		cout << "You can't do triangle with those sides." << endl;
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
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
}



