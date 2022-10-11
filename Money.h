#pragma once
#include <string>
#include <sstream>

using namespace std;

class Money
{
private:
	long first;
	unsigned int second;
public:
	void Display() const;
	void Read();
	bool Init(long x, int y);
	void Menu();
	void Addition();
	void Division();
	void DBAN();
	friend double friendAddition(long x, int y);
	static double staticAddition(long x, int y);
	string toString();
};