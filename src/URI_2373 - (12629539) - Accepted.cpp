#include <iostream>
using namespace std;

int main() {
	int n, l, c, sum = 0;
	
	cin >> n;
	while (n--) {
		cin >> l >> c;
		if (l > c)
			sum += c;
	}
	
	cout << sum << endl;
	return 0;
}