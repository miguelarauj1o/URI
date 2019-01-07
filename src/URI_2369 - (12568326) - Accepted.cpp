#include <iostream>
using namespace std;

int bill(int v) {
	if (v <= 10) {
		return 7;
	} else if (v > 10 && v < 31) {
		int dif = (v - 10);
		return (7 + dif);
	} else if (v > 30 && v < 100) {
		int dif = (v - 30) * 2;
		return (7 + 20 + dif);
	} else {
		int dif = (v - 100) * 5;
		return (7 + 20 + 140 + dif);
	}
}

int main() {
	int n;
	cin >> n;
	cout << bill(n) << endl;
	return 0;
}