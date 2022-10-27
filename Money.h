#pragma once
#include <string>
#include <sstream>

using namespace std;

class Money
{
private:
	long hryvnia;
	unsigned int kopieck;
public:
	void Display() const;
	void Read();
	void setH(long x) { 
		hryvnia = x;
	}
	void setk(int y) {
		kopieck = y;
	}
	double getH() const { 
		return hryvnia;
	}
	double getK() const { 
		return kopieck; 
	}
	bool Init(long x, int y);
	Money Addition(Money a);
	void Division(long x, int y);
	void DBAN();
	friend Money friendAddition(Money a, Money b);
	static Money staticAddition(Money a, Money b);
	string toString();
};