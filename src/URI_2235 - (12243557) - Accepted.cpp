#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a - b == 0) {cout << "S" << endl;}
	else if (a - c == 0) {cout << "S" << endl;}
	else if (b - c == 0) {cout << "S" << endl;}
	else if ((a + b) - c == 0) {cout << "S" << endl;}
	else if ((a + c) - b == 0) {cout << "S" << endl;}
	else if ((b + c) - a == 0) {cout << "S" << endl;}
	else {cout << "N" << endl;}
	return 0;
}