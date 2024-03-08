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

/*
ZADANIE
Zdefiniuj klase opisujące konto bankowe. Możliwości klasy:
* konstruktory
* metoda która dokona wpłaty na konto
* metoda która wypłaty z konta
* metoda która wykona przelew na inne konto
* metodę która pokaże informacje o koncie.

Napisz program który zaprezentuje możliwości obiektu na podstawie tej klasy.
*/


class BankAccount
{
private:
	string accountNumber;
	string owner;
	double balance;
public:
	//konstuktor
	BankAccount(string number, string owner, double postal_balance = 0.00)
	{
		accountNumber = number;
		this->owner = owner;
		balance = postal_balance;

	}
	void Deposit(double sum)
	{
		balance += sum;
	}

	void Withdraw(double sum) {
		if (balance >= sum) {
			balance -= sum;
			cout << "Withdrawed: " << sum << " PLN." << endl;
		}
		else {
			cout << "There are insufficient funds in your account." << endl;
		}
	}

	void
		Transfer(double sum, string targetAccount)
	{
		if (balance >= sum)
		{
			balance -= sum;
			cout << "Funds were transferred to account: " << targetAccount << " in a sum of: " << sum << " PLN." << endl;

		}
		else
		{
			cout << "Insufficient funds in the account" << endl;
		}

	}

	void ShowInfo()
	{
		cout << "Account number: " << accountNumber << endl;
		cout << "Account owner: " << owner << endl;
		cout << "Balance: " << balance << endl;
	}
};

void ShowBankInfo()
{
	BankAccount account("1234567890", "Jan Kowalski", 1000.0);

	account.ShowInfo();

	account.Deposit(500.0);
	account.ShowInfo();

	account.Deposit(200.0);
	account.ShowInfo();

	account.Transfer(300.0, "0987654321");
	account.ShowInfo();
}


void rectExercises()
{
	Rectangle firstRectangle;
	cout << "Area: " << firstRectangle.getArea() << endl;
	cout << "Perimeter: " << firstRectangle.getPerimeter() << endl;
	firstRectangle.getInfo();
}


int main()
{
	//point firstpoint;
	//firstpoint.x = 3;
	//firstpoint.setx(-3);
	//firstpoint.y = 5;
	//firstpoint.z = 8;
	//cout << "distance " << firstpoint.distancefromcenter() << "\n";

	//point secondpiont(15);
	//cout << "distance " << secondpiont.distancefromcenter() << "\n";

	//rectExercises();

	ShowBankInfo();
}