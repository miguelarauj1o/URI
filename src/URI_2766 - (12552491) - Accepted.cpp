#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	int i = 1;
	while(cin >> s) {
		if (i == 3 || i == 7 || i == 9) {
			cout << s << endl;
		}
		i++;
	}
	return 0;
}