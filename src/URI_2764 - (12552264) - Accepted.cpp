#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	cin >> s;
	string dd = s.substr(0,2);
	string mm = s.substr(3,2);
	string yy = s.substr(6,2);
	
	cout << mm << "/" << dd << "/" << yy << endl;
	cout << yy << "/" << mm << "/" << dd << endl;
	cout << dd << "-" << mm << "-" << yy << endl;
	return 0;
}