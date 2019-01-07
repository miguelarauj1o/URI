#include <iostream>
using namespace std;

int execute(int a, int b, char op) {
	if (op == '+') {
		return a + b;
	} else if (op == '-') {
		return a - b;
	} else {
		return a * b;
	}
}

int main() {
	int i, n, a, b, res, v;
	char c, equal;
	
	cin >> n;
	while (n--) {
		cin >> a >> c >> b >> equal >> res;
		cout << "E";
		v = abs(execute(a, b, c) - res);
		for (i = 0; i < v; i++)
			cout << "r";
		cout << "ou!" << endl;
	}
	
	return 0;
}