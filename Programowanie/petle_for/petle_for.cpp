

#include <iostream>
#include <string>
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

void task3()
{
	double sumOfNumbers = 0.0;
	do
	{
		double numberFromUser;
		cout << "Enter a number: " << endl;
		cin >> numberFromUser;

		sumOfNumbers = sumOfNumbers + numberFromUser;

		if (numberFromUser == 0)
		{
			cout << "Sum of numbers is: " << sumOfNumbers;
			return;
		}
	} while (true);
}
//* Program wyświetlający na ekranie kolejne liczby naturalne od 1 do 10
void task4()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << i << endl;
	}
}

//* Program obliczający sumę liczb od 1 do 100
void task5()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}
	cout << sum << endl;
}

//*Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task6()
{
	for (int i = 1; i < 10; i++)
	{
		double powerOfNumber = pow(i, 2);
		cout << powerOfNumber << endl;
	}
}
//	* Program obliczający n!.
void task7()
{
	int numberFromUser;
	cout << "Enter number: " << endl;
	cin >> numberFromUser;
	int sum = 1;
	for (int i = 1; i <= numberFromUser; i++)
	{
		sum = sum * i;
	}
	cout << "Factorial equals: " << sum << endl;
}
//Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task8()
{
	int factorial = 1;
	for (int i = 1; i <= 10; i++)
	{
		factorial = factorial * i;
		cout << "Factorials 1-10 equals: " << factorial << endl;
	}
}
//* Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
void task9()
{

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i << "*" << j << "=" << i * j << "  ";
		}
		cout << endl;
	}
}
//*Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task10()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			cout << i << endl;
		}
	}
}
//*Program obliczający sumę kwadratów liczb od 1 do 10
void task11()
{
	int sum = 0;
	for (int i = 0; i <= 10; i++)
	{
		sum = sum + i * i;
	}
	cout << sum;
}
//* Napisz program, który policzy sumę cyfr podanej przez użytkownika liczby.
void task12()
{
	double numberFromUser = 0;
	double sum = 0;

	do
	{
		cout << "Enter number: " << endl;
		cin >> numberFromUser;
		sum = sum + numberFromUser;
		cout << "Sum: " << sum << endl;
	} while (true);
}
// Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dopóki suma tych kwadratów nie przekroczy 1000.
void task13()
{
	int sum = 0;
	for (int i = 1; sum < 1000; i++)
	{
		if (i >= 10)
		{
			i = 1;
		}
		sum = sum + i * i;
		cout << sum << endl;
	}
}
//* Program, kóry wyświetli poniższe cztery wzory :
// *
// **
// ***
// ****
// *****
void task14()
{
	int numberFromUser = 0;
	cout << "Enter number: " << endl;
	cin >> numberFromUser;
	for (int i = 0; i <= numberFromUser; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
/* Napisz program, który poprosi użytkownika o wprowadzenie dowolnej liczby całkowitej.Następnie program powinien obliczyć i wyświetlić liczbę cyfr.
*/
void task15()
{
	int numberFromUser = 0;
	cout << "Enter number from user: " << endl;
	cin >> numberFromUser;
	cout << to_string(numberFromUser).length();
}
//* Miasto T.ma obecnie 100 tys.mieszkańców, ale jego populacja rośnie co roku o 3 % rocznie.Miasto B.ma 300 tys.mieszkańców 
// i ta liczba rośnie w tempie 2 % na rok.Wykonaj symulację prezentującą liczbę mieszkańców w obu miastach i zatrzymującą się, gdy liczba mieszkańców miasta T.przekroczy liczbę z miasta B.
void task16()
{
	int firstCity=100000;
	int secondCity = 300000;
	
	for (int i = 0; firstCity < secondCity; i++)
	{
		firstCity = firstCity * 1.03;
		secondCity = secondCity * 1.02;
		cout << firstCity << "  " << secondCity << endl;
	}
	cout << firstCity << "  " << secondCity << endl;
}

//Oblicz sumę szeregu 1 / 1 ^ 2 + 1 / 2 ^ 2 + 1 / 3 ^ 2 + ... + 1 / n ^ 2. 
// Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 i
//  spierwiastkowaniu powinieneś otrzymać wartość liczby π(suma szeregu jest równa π2 / 6).Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.
void task17()
{
	double sum = 0;
	double numberFromUser = 0;
	cout << "Enter number: " << endl;
	cin >> numberFromUser;
	for (int i = 1; i < numberFromUser; i++)
	{
		sum = sum + (1.0/pow(i, 2));
	}
	cout << "Sum: " << sqrt(sum * 6) << endl;
}
/*DO - WHILE

WHILE


* Program sprawdzający czy podana liczba jest liczbą doskonałą(czyli taką, której suma dzielników(z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).

FOR
* Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu(ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)



*/


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
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
	//task14();
	//task15();
	//task16();
	task17();
}

