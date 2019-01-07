#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	cin >> s;
	cout << s.substr(0,3) << endl;
	cout << s.substr(4,3) << endl;
	cout << s.substr(8,3) << endl;
	cout << s.substr(12,2) << endl;
	return 0;
}