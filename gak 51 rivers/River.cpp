#include "River.h"
#include<fstream>
#include<iostream>
using namespace std;
River :: River() {
	cout << name << " " << length << " " << start << " " << end << " " << country << endl;
}
River :: River(ifstream& fin) {
	fin >> name >> length >> start >> end
		>> country;
} 
void River::printRiver() {
	cout << name << " " << length << " " << start << " " << end << " " << country << endl;
}
