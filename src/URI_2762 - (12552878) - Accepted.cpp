#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int p;
	string s;
	getline(cin, s);
	
	for(int i = 0; i < s.length(); i++) {
		if (s[i] == '.') {
			p = i;
		}
	}
	
	string x = s.substr(0, p);
	string y = s.substr(p + 1);
	
	while(y[0] == '0') {
		y.erase(0,1);
	}
	
	cout << y << "." << x << endl;
	return 0;
}