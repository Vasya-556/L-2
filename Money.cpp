#include "Money.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Money::Read()
{
	long x;
	int y;
	cout << "hryvnia = ";
	cin >> x;
	cout << "kopieck = ";
	cin >> y;
	Init(x, y);
}

bool Money::Init(long x, int y) {
	hryvnia = x;
	kopieck = y;
	if (hryvnia < 0 || kopieck < 0) {
		hryvnia = 0;
		kopieck = 0;
		cout << "Wrong parameters" << endl;
		return false;
	}
	else {
		while (kopieck >= 100) {
			hryvnia += 1;
			kopieck -= 100;
		}
		return true;
	}
}

void Money::Display() const
{
	cout << "Money = " << hryvnia << "," << kopieck << endl;
}

Money Money::Addition(Money a){
	Money c;
	c.hryvnia = this->hryvnia + a.hryvnia;
	c.kopieck = this->kopieck + a.kopieck;
	cout << "Money = " << c.hryvnia << "," << c.kopieck << endl;
	return c;
}

void Money::Division(long x, int y) {

	hryvnia = hryvnia / x;
	kopieck = kopieck / x;
	cout << "Money1 = " << hryvnia << "," << kopieck << endl;
}

void Money::DBAN() {
	long x;
	int y;
	float u;
	cout << "Enter the numerator: ";
	cin >> x;
	cout << "Enter the denominator: ";
	cin >> y;
	u = x / y;
	kopieck = hryvnia * 100 + kopieck;
	hryvnia = 0;
	kopieck /= u;
	if (kopieck >= 100) {
		hryvnia += kopieck / 100;
		kopieck -= hryvnia * 100;
	}
	else {
		hryvnia += kopieck;
		kopieck -= hryvnia;
	}
}

Money friendAddition(Money a, Money b) {
	Money c;
	c.hryvnia = a.hryvnia + b.hryvnia;
	c.kopieck =	a.kopieck + b.kopieck;
	while (c.kopieck >= 100)
	{
		c.hryvnia += 1;
		c.kopieck -= 100;
	}
	cout << "Money = " << c.hryvnia << "," << c.kopieck << endl;
	return c;
}

Money Money::staticAddition(Money a, Money b)
{
	Money c;
	c.hryvnia = a.hryvnia + b.hryvnia;
	c.kopieck = a.kopieck + b.kopieck;
	while (c.kopieck >= 100)
	{
		c.hryvnia += 1;
		c.kopieck -= 100;
	}
	cout << "Money = " << c.hryvnia << "," << c.kopieck << endl;
	return c;
}

string Money::toString()
{
	stringstream m; 
	m << "to string Money = " << hryvnia << "," << kopieck << endl;
	return m.str(); 
}