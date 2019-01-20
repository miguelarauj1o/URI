#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	string s;
	int res = 0;
	cin >> s;
	int len = s.length();
	char *arr = new char[len];
	strcpy(arr, s.c_str());
	
	for (int i = 0; i < len; i++) {
		char c = arr[i];
		res = (10 * res + c - '0') % 3;	
	}
	
	cout << res << endl;
	return 0;
}