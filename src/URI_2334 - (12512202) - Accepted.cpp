#include <iostream>
using namespace std;

int main() {
	unsigned long long int d;
	
	while(cin >> d) {
		if (d == -1)
			break;
		d -= 1;
		if (d == 18446744073709551615 || d == 0) cout << "0" << endl; //LOL
		else cout << d << endl;
	}
}