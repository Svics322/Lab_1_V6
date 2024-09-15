#pragma once
#include<iostream>
#include<string>

using namespace std;

class Truth {
private:
	bool p, q;	
public:

	void setP(bool p);
	void setQ(bool q);

	bool getP() const { return this->p; }
	bool getQ() const { return this->q; }

	void Input();

	bool isValid(string input);
	bool getVal(string input);

	bool checkConjuction();
	bool checkDisjunction();
	bool checkExcConjuction();
	bool checkFirstImplication();
	bool checkSecondImplication();
	bool checkEquality();

	Truth();
	Truth(bool p, bool q);
};