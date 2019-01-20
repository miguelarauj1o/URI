#include <iostream>
using namespace std;

int main() {
	float a, g, ra, rg;
	cin >> a >> g >> ra >> rg;
	(ra/a > rg/g) ? cout << ("A") << endl: cout << ("G") << endl;
	return 0;
}