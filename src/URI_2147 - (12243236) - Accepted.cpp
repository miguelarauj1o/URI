#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	string s;
	double count;
	
	cin >> t;
	while(t--) {
		cin >> s;
		count = s.length() * 0.01;
		
		cout.precision(2);
		cout << fixed << count << endl;
	}
	
	return 0;
}