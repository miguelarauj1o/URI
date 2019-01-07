#include <iostream>
using namespace std;

int main() {
	int n, a, l, p;
	cin >> n >> a >> l >> p;
	(a < n || l < n || p < n) ? cout << "N" << endl: cout << "S" << endl; 
}