#include <iostream>
#include <cstring>
using namespace std;

const string SEQ = "ABCD";

int main() {
	unsigned long long int n, v;
	string e;
	
	while(cin >> n && n) {
		e = "", v = n * n;
		
		do {
			e.insert(e.begin(), SEQ[(v % 4)]);
			v /= 4;
		} while(v != 0);
		
		cout << e << endl;
	}
	
	return 0;
}