#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if ((x >= 0 && x < 433) && (y >= 0 && y < 469))
		cout << "dentro" << endl;
	else 
		cout << "fora" << endl;
	return 0;
}