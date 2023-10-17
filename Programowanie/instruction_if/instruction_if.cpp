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
	if (
		day < 1 || day >31 || month < 1 || month > 12
		|| (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11))
		|| (month == 2 && day > 29)
		|| (month == 2 && day == 29 && !isLeapYear)
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
	double firstSide;
	double secondSide;
	double thirdSide;
	cout << "Enter first side of triangle: " << endl;
	cin >> firstSide;
	cout << "Enter second side of triangle: " << endl;
	cin >> secondSide;
	cout << "Enter third side of triangle: " << endl;
	cin >> thirdSide;
	if ((firstSide + secondSide > thirdSide) && (secondSide + thirdSide > firstSide) && (thirdSide + firstSide > secondSide))
	{
		cout << "From those sides you can make a triangle." << endl;
	}
	else
	{
		cout << "You can't do triangle with those sides." << endl;
	}
}
//11. Napisz program, który będzie działać jako prosty kalkulator matematyczny, umożliwiając użytkownikowi wybór 
// operacji(dodawanie, odejmowanie, mnożenie, dzielenie) i wprowadzanie liczb do obliczeń.
void task11()
{
	char operation;
	double firstNumber;
	double secondNumber;

	cout << "Choose an operation: + (addition), - (subtraction), * (multiplication), / (division)" << endl;
	cin >> operation;
	cout << "Enter the first number: " << endl;
	cin >> firstNumber;
	cout << "Enter the second number: " << endl;
	cin >> secondNumber;

	switch (operation)
	{
	case '+':
		cout << "Addition result of those two numbers is: " << firstNumber + secondNumber << endl;
		break;
	case '-':
		cout << "Subtraction result of those two numbers is: " << firstNumber - secondNumber << endl;
		break;
	case '*':
		cout << "Multiplication result of those two numbers is: " << firstNumber * secondNumber << endl;
		break;
	case '/':
		cout << "Subtraction result of those two numbers is: " << firstNumber - secondNumber << endl;
		break;
	default:
		cout << "Invaild operation. Please use '+', '-', '*', or '/'." << endl;
	}
}
//12. Napisz program, który wczyta numer miesiąca i wyświetli jego słowny odpowiednik.
void task12()
{
	int month;
	cout << "Enter the number of the month: " << endl;
	cin >> month;

	switch (month)
	{
	case 1:
		cout << "January" << endl;
		break;
	case 2:
		cout << "February" << endl;
		break;
	case 3:
		cout << "March" << endl;
		break;
	case 4:
		cout << "April" << endl;
		break;
	case 5:
		cout << "May" << endl;
		break;
	case 6:
		cout << "June" << endl;
		break;
	case 7:
		cout << "July" << endl;
		break;
	case 8:
		cout << "August" << endl;
		break;
	case 9:
		cout << "September" << endl;
		break;
	case 10:
		cout << "October" << endl;
		break;
	case 11:
		cout << "November" << endl;
		break;
	case 12:
		cout << "December" << endl;
		break;
	default:
		cout << "There is no such month." << endl;
	}
}
//13. Napisz program, który na podstawie współczynników równania kwadratowego(a, b, c)
//  sprawdzi, czy to równanie ma rozwiązania rzeczywiste, i jeśli tak, to je obliczy.
void task13()
{
	double coefficientA;
	double coefficientB;
	double coefficientC;
	cout << "Enter the first coefficent A: " << endl;
	cin >> coefficientA;
	cout << "Enter the second coefficent B: " << endl;
	cin >> coefficientB;
	cout << "Enter the third coefficent C: " << endl;
	cin >> coefficientC;
	double delta = coefficientB * coefficientB - 4 * coefficientA * coefficientC;
	if (delta > 0)
	{
		double x1 = (-coefficientB + sqrt(delta)) / (2 * coefficientA);
		double x2 = (-coefficientB - sqrt(delta)) / (2 * coefficientA);
		cout << "The equation has two real roots." << endl;
		cout << "x1: " << x1 << endl;
		cout << "x2: " << x2 << endl;
	}
	else if (delta == 0)
	{
		double x1 = -coefficientB / (2 * coefficientA);
		cout << "The equation has only one real root." << endl;
		cout << "x1: " << x1 << endl;
	}
	else
	{
		cout << "The equation doesn't have any real roots." << endl;
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
	//task11();
	//task12();
	//task13();
}



