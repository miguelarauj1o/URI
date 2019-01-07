#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int i, p = 0;
	string s;
	getline(cin, s);
	for (i = 0; i < s.length(); i++) {
		if (s[i] == ',') {
			p = i;
		}
	}
	
	cout << s.substr(0, p) << endl;
	cout << s.substr(p + 1) << endl;
	
	return 0;
}