#include <iostream>
using namespace std;

class point
{
public:
	double x;
	double y;
	double z;
};

double DistanceFromCenter(double x, double y, double z)
{
	double distance;
	distance = sqrt(x * x + y * y + z * z);
	return distance;
}

double DistanceFromCenter(point p)
{
	double distance;
	distance = sqrt(p.x * p.x + p.y * p.y + p.z * p.z);
	return distance;
}

int main()
{
	point firstPoint;
	firstPoint.x = 3;
	firstPoint.y = 5;
	firstPoint.z = 8;

	cout << "Distance from center: " << DistanceFromCenter(firstPoint.x, firstPoint.y, firstPoint.z) << endl;
	cout << "Distance from center: " << DistanceFromCenter(firstPoint) << endl;
}