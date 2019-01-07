#include <iostream>
using namespace std;

int main() {
	float o, b, i;
	cin >> o >> b >> i;
	if (o < b && o < i) {
		cout << "Otavio" << endl;
	} else if (b < o && b < i) {
		cout << "Bruno" << endl;
	} else if (i < b && i < o) {
		cout << "Ian" << endl;
	} else {
		cout << "Empate" << endl;
	}
	
	return 0;
}