#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	string s;
	
	cin >> t;
	while(t--) {
		cin >> s;
		(s == "Batmain") ? puts("N"): puts("Y");
	}

	return 0;
}