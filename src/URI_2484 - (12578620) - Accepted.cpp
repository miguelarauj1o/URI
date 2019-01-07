#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
	int i, len, ws;
	string s;
	
	while (getline(cin, s)) {
		ws = 0, len = s.length();
		
		while (len > 0) {
			for (i = 0; i < ws; i++) {
				cout << " ";
			}
			
			for (i = 0; i < len; i++) {
				cout << s[i];
				if (i != len - 1) {
					cout << " ";
				}
			}
			
			len--, ws++;
			cout << endl;
		}
		
		cout << endl;
	}
}