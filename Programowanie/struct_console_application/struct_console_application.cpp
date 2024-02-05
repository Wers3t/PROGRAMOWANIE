using namespace std;
#include <iostream>


struct point
{
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
	double x, y, z;

	cout << "Enter x: " << endl;
	cin >> x;
	cout << "Enter y: " << endl;
	cin >> y;
	cout << "Enter z: " << endl;
	cin >> z;
	cout << "Distance from center: " << DistanceFromCenter(x, y, z) << endl;

	int x1, y1;
	int x2, y2;

	int xx[50], yy[50], zz[50];
	xx[3] = 5;
	yy[3] = 7;
	zz[3] = 77;

	point firstPoint;
	firstPoint.x = 3;
	firstPoint.y = 5;
	firstPoint.z = 8;
	
	cout << "Distance from center: " << DistanceFromCenter(firstPoint.x, firstPoint.y, firstPoint.z) << endl;
	cout << "Distance from center: " << DistanceFromCenter(firstPoint) << endl;
}	  