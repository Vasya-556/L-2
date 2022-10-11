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
	first = x;
	second = y;
	if (first < 0 || second < 0) {
		first = 0;
		second = 0;
		cout << "Wrong parameters" << endl;
		return false;
	}
	else {
		if (second >= 100) {
			int k = second % 10 % 10;
			first += k;
			second -= k * 100;
		}
		return true;
	}
}

void Money::Display() const
{
	cout << "Money = " << first << "," << second << endl;
}

void Money::Menu()
{
	Money n;
	int m;
	cout << "Chose action" << endl;
	cout << "1 - Addition" << endl;
	cout << "2 - Division" << endl;
	cout << "3 - Division by a number" << endl;
	cout << "4 - Exit" << endl;
	cout << "Enter: ";

	cin >> m;
	switch (m) {
	case 1: Addition(); break;
	case 2: Division(); break;
	case 3: DBAN(); break;
	case 4: break;
	}
}

void Money::Addition(){
	long x;
	int y;
	cout << first << "," << second << " +  ?" << endl;
	cout << "Enter the second hryvnias: ";
	cin >> x;
	cout << "Enter the second kopieck: ";
	cin >> y;
	first += x;
	second += y;
	Display();
	Menu();
}

void Money::Division() {
	long x;
	int y;
	cout << first << "," << second << " /  ?" << endl;
	cout << "Enter the second hryvnias: ";
	cin >> x;
	cout << "Enter the second kopieck: ";
	cin >> y;
	second = first * 100 + second;
	first = 0;
	y = x * 100 + y;
	second /= y;
	if (second >= 100) {
		first += second / 100;
		second -= first * 100;
	}
	else {
		first += second;
		second -= first;
	}
	Display();
	Menu();
}
void Money::DBAN() {
	float u;
	cout << first << "," << second << " /  ?" << endl;
	cout << "Enter the number: ";
	cin >> u;
	second = first * 100 + second;
	first = 0;
	second /= u;
	if (second >= 100) {
		first += second / 100;
		second -= first * 100;
	}
	else {
		first += second;
		second -= first;
	}
	Display();
	Menu();
}

double friendAddition(long x, int y) {
	long x1;
	int y1;
	cout << x << "," << y << " +  ?" << endl;
	cout << "Enter the second hryvnias: ";
	cin >> x1;
	cout << "Enter the second kopieck: ";
	cin >> y1;
	x += x1;
	y += y1;
	return 0;
}

double Money::staticAddition(long x, int y)
{
	long x1;
	int y1;
	cout << x << "," << y << " +  ?" << endl;
	cout << "Enter the second hryvnias: ";
	cin >> x1;
	cout << "Enter the second kopieck: ";
	cin >> y1;
	x += x1;
	y += y1;
	cout << "Money = " << x << "," << y << endl;
	return 0;
}

string Money::toString()
{
	stringstream m; 
	m << "to string Money = " << first << "," << second << endl; 
	return m.str(); 
}

