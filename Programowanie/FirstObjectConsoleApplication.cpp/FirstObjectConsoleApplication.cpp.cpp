#include <iostream>

/*
Zdefiniuj klase opisującą prostokąt. Możliwości klasy:
* konstruktory
* metoda która zwórci obwód prostokąta
* metoda która pole prostokąta
* metodę która pokaże informacje o prostokącie.

Napisz program który zaprezentuje możliwości obiektu na podstawie tej klasy.
*/


using namespace std;
class Point
{
private:
	int x;
	int y;
	int z;

public:
	Point()
	{
		x = 3;
		y = 7;
		z = 10;
	}

	Point(int xx)
	{
		x = xx;
		y = 7;
		z = 10;
	}

	Point(int xx, int yy, int zz)
	{
		x = xx;
		y = yy;
		z = zz;
	}

	void SetX(int value)
	{
		//x = abs(value);
		if (value >= 0)
			x = value;
		else
		{
			//reakcja na błąd
		}
	}

	int GetX()
	{
		//if (uprawnienia)

		return x;
	}

	double DistanceFromCenter()
	{
		double distance;
		distance = sqrt(x * x + y * y + z * z);
		return distance;
	}
};


class Rectangle
{
private:
	float lenght;
	float height;
public:
	Rectangle(float l = 1, float h = 1)
	{
		lenght = l;
		height = h;
	}



	float getArea() {
		return lenght * height;
	}

	float getPerimeter() {
		return lenght * 2 + height * 2;
	}

	void getInfo() {

		cout << "Area: " << getArea() << endl;
		cout << "Perimeter: " << getPerimeter() << endl;
		cout << "Height: " << height << endl;
		cout << "Lenght: " << lenght << endl;
	}
};

int main()
{
	//Point firstPoint;
	////firstPoint.x = 3;
	//firstPoint.SetX(-3);
	////firstPoint.y = 5;
	////firstPoint.z = 8;
	//cout << "Distance " << firstPoint.DistanceFromCenter() << "\n";

	//Point secondPiont(15);
	//cout << "Distance " << secondPiont.DistanceFromCenter() << "\n";

	Rectangle firstRectangle;
	cout << "Area: " << firstRectangle.getArea() << endl;
	cout << "Perimeter: " << firstRectangle.getPerimeter() << endl;
	firstRectangle.getInfo();
}