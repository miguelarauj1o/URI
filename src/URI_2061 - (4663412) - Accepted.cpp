#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
	int n, m, sum = 0;
	string s;

	cin >> n >> m;
	sum = n;
	for (int i = 0; i < m; i++) {
		cin >> s;
		if (s == "fechou") sum++;
		else sum--;
	}

	cout << sum << endl;
	return 0;
}#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
	int n, m, sum = 0;
	string s;

	cin >> n >> m;
	sum = n;
	for (int i = 0; i < m; i++) {
		cin >> s;
		if (s == "fechou") sum++;
		else sum--;
	}

	cout << sum << endl;
	return 0;
}