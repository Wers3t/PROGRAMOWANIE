
#define  _USE_MATH_DEFINES
#include <iostream>
using namespace std;

void arithmeticAverage()
{
	double firstNumber;
	double secondNumber;
	double average;
	cout << "First number" << endl;
	cin >> firstNumber;
	cout << "Second number" << endl;
	cin >> secondNumber;
	average = (firstNumber + secondNumber) / 2;
	cout << "Arithmetic Average of two numbers: " << average << endl;
}

void squareArea()
{
	double firstSide;
	double secondSide;
	double area;
	cout << "First side of the square" << endl;
	cin >> firstSide;
	cout << "Second side of the square" << endl;
	cin >> secondSide;
	area = firstSide * secondSide;
	cout << "Square area: " << area << endl;
}

void coneVolume()
{
	double height;
	double radius;
	double volume;
	cout << "Height of cone:" << endl;
	cin >> height;
	cout << "Radius of cone" << endl;
	cin >> radius;
	volume = 1.0 / 3 * M_PI * pow(radius, 2) * height;
	cout << "Cone volume: " << volume << endl;
}

void circleArea()
{
	double radius;
	double area;
	cout << "Radius of circle" << endl;
	cin >> radius;
	area = M_PI * (pow(radius, 2));
	cout << "Circle area: " << area << endl;
}

void powerOfTwoNumbers()
{
	double firstNumber;
	double secondNumber;
	double value;
	cout << "First Number: " << endl;
	cin >> firstNumber;
	cout << "Second Number: " << endl;
	cin >> secondNumber;
	value = pow(firstNumber, 2) + pow(secondNumber, 2);
	cout << "Value of a^2 + b^2: " << value << endl;
}

void triangleArea()
{
	double base;
	double height;
	double area;
	cout << "Height of triangle" << endl;
	cin >> height;
	cout << "Base of triangle" << endl;
	cin >> base;
	area = (base * height) / 2;
	cout << "Area of triangle: " << area << endl;
}

void sphereVolume()
{
	double radius;
	double volume;
	cout << "Radius of sphere" << endl;
	cin >> radius;
	volume = 4.0 / 3 * M_PI * pow(radius, 3);
	cout << "Volume of sphere: " << volume << endl;
}

void trapezoidArea()
{
	double firstBase;
	double secondBase;
	double height;
	double area;
	cout << "First base of trapezoid" << endl;
	cin >> firstBase;
	cout << "Second base of trapezoid" << endl;
	cin >> secondBase;
	cout << "Height of trapezoid" << endl;
	cin >> height;
	area = 1.0 / 2 * (firstBase + secondBase) * height;
	cout << "Area of trapezoid: " << area << endl;
}

void weightedAverageOfThreeNumbers()
{
	double w1;
	double w2;
	double w3;
	double firstNumber;
	double secondNumber;
	double thirdNumber;
	double average;
	cout << "First number" << endl;
	cin >> firstNumber;
	cout << "First number weight" << endl;
	cin >> w1;
	cout << "Second number" << endl;
	cin >> secondNumber;
	cout << "Second number weight" << endl;
	cin >> w2;
	cout << "Third number" << endl;
	cin >> thirdNumber;
	cout << "Third number weight" << endl;
	cin >> w3;
	average = (firstNumber * w1 + secondNumber * w2 + thirdNumber * w3) / (w1 + w2 + w3);
	cout << "Weighted average of 3 numbers: " << average << endl;
}

int main()
{
	// ArithmeticAverage();
	// squareArea();
	// coneVolume();
	// circleArea();
	// powerOfTwoNumbers();
	// triangleArea();
	// sphereVolume();
	//trapezoidArea();
	//weightedAverageOfThreeNumbers();
}

/*
Priorytet operatorów:

(, )
+, - (unarne)
*, /, %
+, -
=

*/

/*
Podstawy programowania:
1. Program obliczajacy srednia arytmetyczna dwoch liczb.
2. Program obliczający pole prostokąta.
3. Program obliczający objętość stożka.
4. Program obliczający pole koła.
5. Program obliczający wartość wyrażenia a^2 + b^2
6. Program obliczający pole trójkąta o podstawie b i wysokości h
7. Program obliczający objętość kuli o promieniu r
8. Program obliczający pole trapezu o podstawach a i b oraz wysokości h
9. Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*/



