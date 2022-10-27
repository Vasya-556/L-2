#include <iostream>
#include "Money.h"
#include <string>

using namespace std;

int main()
{
	/*
	long x;
	int y;
	cout << "Enter hryvnias: ";
	cin >> x;
	cout << "Enter kopieck: ";
	cin >> y;
	Money::staticAddition(x, y);
	Money n;
	n.Read();
	n.Division(2, 2);
	n.Read();
	n.Addition();
	n.DBAN();
	cout << n.toString();*/
	Money a;
	a.setH(10);
	a.setk(50);
	a.Display();
	Money b;
	cout << "Additon" << endl;
	b.Read();
	a.Addition(b);
	cout << "Division" << endl;
	b.Division(2, 2);
	cout << "Division by a number" << endl;
	b.Read();
	b.DBAN();
	b.Display();
	Money::staticAddition(a, b);
	friendAddition(a, b);
	cout << "Money to string(a) = " << a.toString() << endl;
	cout << "Money to string(b) = " << b.toString() << endl;
}
