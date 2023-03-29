//#include "golf.h"
//#include <iostream>
//#include <cstring>
//using namespace std;
//void setgolf(golf& g, const char* name, int hc) {
//	int i = 0;
//	while (name[i]) {
//		g.fullname[i] = name[i];
//		i++;
//	}
//	g.fullname[i] = '\0';
//	g.handicap = hc;
//}
//
//int setgolf(golf& g) {
//	cout << "Enter the name: " << endl;
//	cin.getline(g.fullname, Len);
//	if (!strcmp(g.fullname,"")) {
//		return 0;
//	}
//	else {
//		cout << "Enter the handicap: " << endl;
//		cin >> g.handicap;
//		cin.get();
//		return 1;
//	}
//}
//
//void handicap(golf& g, int hc) {
//	g.handicap = hc;
//}
//
//void showgolf(const golf& g) {
//	cout << "Fullname: " << g.fullname << endl;
//	cout << "Handicap: " << g.handicap << endl;
//}