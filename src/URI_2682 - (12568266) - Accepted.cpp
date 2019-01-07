#include <iostream>
using namespace std;

int main() {
	long long int n = 0, m = 0, r = 0;
	bool flag = false;
	
	while (cin >> n) { 
		if (n < m && !flag)
			r = m + 1, flag = true;
		m = n;
	}
	
	(flag) ? cout << r << endl: cout << m + 1 << endl;
	return 0;
}