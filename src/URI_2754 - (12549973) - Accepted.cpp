#include <iostream>
using namespace std;

const char *output =
	"234.345000 - 45.698000\n"
	"234 - 46\n"
	"234.3 - 45.7\n"
	"234.34 - 45.70\n"
	"234.345 - 45.698\n"
	"2.343450e+02 - 4.569800e+01\n"
	"2.343450E+02 - 4.569800E+01\n"
	"234.345 - 45.698\n"
	"234.345 - 45.698\n";

int main() {
	cout << output;
	return 0;
}