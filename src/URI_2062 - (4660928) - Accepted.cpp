#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	string s;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s.length() == 3) {
			if (s[0] == 'U' && s[1] == 'R') cout << "URI";
			else if (s[0] == 'O' && s[1] == 'B') cout << "OBI";
			else cout << s;
		} else {
			cout << s;
		}

		if (i != (n - 1))
			cout << " ";
	}

	cout << endl;
	return 0;
}#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	string s;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s.length() == 3) {
			if (s[0] == 'U' && s[1] == 'R') cout << "URI";
			else if (s[0] == 'O' && s[1] == 'B') cout << "OBI";
			else cout << s;
		} else {
			cout << s;
		}

		if (i != (n - 1))
			cout << " ";
	}

	cout << endl;
	return 0;
}