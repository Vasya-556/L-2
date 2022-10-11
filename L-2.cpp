#include <iostream>
#include "Money.h"
#include <string>

using namespace std;

int main()
{
	long x;
	int y;
	cout << "Enter hryvnias: ";
	cin >> x;
	cout << "Enter kopieck: ";
	cin >> y;
	Money::staticAddition(x, y);
	Money n;
	n.Read();
	n.Display();
	cout << n.toString();
	n.Menu();
}
