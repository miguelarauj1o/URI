#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(int argc, char *argv[]) {
	string s;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	(s.find("zelda") != string::npos) ? puts("Link Bolado"): puts("Link Tranquilo");
}