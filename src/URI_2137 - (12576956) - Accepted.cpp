#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(const string& a, const string& b) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] != b[i]) {
			return a[i] < b[i];
		}
	}
	
	return false;
}

int main() {
	int n, i;
	string s;
	vector<string> list;
	
	while (cin >> n) {
		list.clear();
		for (i = 0; i < n; i++) {
			cin >> s;
			list.push_back(s);
		}
		
		sort(list.begin(), list.end(), cmp);
		for (i = 0; i < n; i++)
			cout << list[i] << endl;
	}
	
	return 0;
}