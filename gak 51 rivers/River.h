#pragma once
#include<string>
using namespace std;
class River
{
public:;
	string name, start, end;
	int length, country;
	River();
	River(ifstream &fin);
	void printRiver();
};

