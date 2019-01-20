#include <iostream>
using namespace std;

int main() {
	int l, c;
	cin >> l >> c;
	((l + c) % 2 == 0) ? puts("1"): puts("0");
	return 0;
}