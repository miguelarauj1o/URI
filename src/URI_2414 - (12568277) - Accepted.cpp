#include <iostream>
using namespace std;

int main() {
	int x, max = -1;
	
	while (cin >> x && x) {
		if (max < x)
			max = x;
	}
	cout << max << endl;
	return 0;
}