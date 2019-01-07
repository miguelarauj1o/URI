#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

struct Country {
	string name;
	int g, s, b;
};

bool cmpByChar(string a, string b) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] != b[i]) {
			return a[i] < b[i];
		}
	}
	
	return false;
}

bool cmp(const Country& a, const Country& b) {
	if (a.g != b.g) {
		return a.g > b.g;
	} 
	
	if (a.s != b.s) {
		return a.s > b.s;
	} 
	
	if (a.b != b.b) {
		return a.b > b.b;
	}
	
	return cmpByChar(a.name, b.name);
}

int main(int argc, char *argv[]) {
	int n, i;
	Country tmp;
	
	cin >> n;
	vector<Country> list;
	for (i = 0; i < n; i++) {
		cin >> tmp.name >> tmp.g >> tmp.s >> tmp.b;
		list.push_back(tmp);
	}
	
	sort(list.begin(), list.end(), cmp);
	for (i = 0; i < n; i++) {
		cout << list[i].name << " " << list[i].g << " "
			<< list[i].s << " " << list[i].b << endl;
	}
}