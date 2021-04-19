#include <iostream>
#include<string>
#include<fstream>
#include<vector>
#include"River.h"
using namespace std;
int main()
{
	ifstream fin("rivers.txt");
	vector<River> s;
	int n;
	cin >> n;
	River* p;
	for (int i = 0; i < 4; i++) {
		p = new River(fin);
		if (p->length > n) {
			p->printRiver();
		}
	}
	cout << endl;
	for (int i = 0; i < s.size(); i++) {
		if (s[i].length >= n)
			s[i].printRiver();
	}
}

