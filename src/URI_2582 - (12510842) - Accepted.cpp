#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
		cin >> x >> y;
		if (x + y == 0) cout << "PROXYCITY";
		else if (x + y == 1) cout << "P.Y.N.G."; 
		else if (x + y == 2) cout << "DNSUEY!";
		else if (x + y == 3) cout << "SERVERS";
		else if (x + y == 4) cout << "HOST!";
		else if (x + y == 5) cout << "CRIPTONIZE";
		else if (x + y == 6) cout << "OFFLINE DAY";
		else if (x + y == 7) cout << "SALT";
		else if (x + y == 8) cout << "ANSWER!";
		else if (x + y == 9) cout << "RAR?";
		else cout << "WIFI ANTENNAS";
		cout << endl;
	}
}