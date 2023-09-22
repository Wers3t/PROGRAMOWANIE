
#define  _USE_MATH_DEFINES
#include <iostream>
using namespace std;

void firstTask()
{
	double a;
	double b;

	cout << "First number" << endl;
	cin  >> a;
	cout << "Second number" << endl;
	cin >> b;
	cout <<   "Arithmetic Average of two numbers: " << (a+b)/2 << endl;
	
}

void secondTask()
{
	double a;
	double b;

	cout << "First side of the square" << endl;
	cin >> a;
	cout << "Second side of the square" << endl;
	cin >> b;
	cout << "Square area: " << a*b << endl;

}

void thirdTask()
{
	double h;
	double r;

	cout << "Height of cone:" << endl;
	cin >> h;
	cout << "Radius of cone" << endl;
	cin >> r;
	cout << "Cone volume: " << 1.0 / 3 * M_PI * pow(r, 2) * h << endl;
}

void fourthTask()
{
	double r;
	cout << "Radius of circle" << endl;
	cin >> r;
	cout << "Circle area: " << M_PI * (pow(r, 2)) << endl;
}

void fifthTask()
{
	double a;
	double b;

	cout << "First Number: " << endl;
	cin >> a;
	cout << "Second Number: " << endl;
	cin >> b;
	cout << "Value of a^2 + b^2: " << pow(a, 2) + pow(b, 2) << endl;
}

void sixthTask()
{
	double b;
	double h;

	cout << "Height of triangle" << endl;
	cin >> h;
	cout << "Base of triangle" << endl;
	cin >> b;
	cout << "Area of triangle: " << (b*h)/2 << endl;
}
void seventhTask()
{
	double r;
	cout << "Radius of sphere" << endl;
	cin >> r;
	cout << "Volume of sphere: " << 4.0 / 3 * M_PI * pow(r, 3) << endl;
}
void eightTask()
{
	double a;
	double b;
	double h;
	cout << "First base of trapezoid" << endl;
	cin >> a;
	cout << "Second base of trapezoid" << endl;
	cin >> b;
	cout << "Height of trapezoid" << endl;
	cin >> h;
	cout << "Area of trapezoid: " << 1.0 / 2 * (a + b) * h << endl;
}
void ninthTask()
{
	double w1;
	double w2;
	double w3;
	double a;
	double b;
	double c;
	cout << "First number" << endl;
	cin >> a;
	cout << "First number weight" << endl;
	cin >> w1;
	cout << "Second number" << endl;
	cin >> b;
	cout << "Second number weight" << endl;
	cin >> w2;
	cout << "Third number" << endl;
	cin >> c;
	cout << "Third number weight" << endl;
	cin >> w3;
	cout << "Weighted average of 3 numbers: " << (a * w1 + b * w2 + c * w3) / (w1 + w2 + w3) << endl;
}

int main()
{
	//firstTask();
	//secondTask();
	//thirdTask();
	//fourthTask();
	//fifthTask();
	//sixthTask();
	//seventhTask();
	//eightTask();
	ninthTask();
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



