#include <iostream>
using namespace std;

int foo(int v) {
	int r = 0;
	
	while(v > 1) {
		v /= 2;
		r++;
	}
	
	return r;
}

int main(int argc, char *argv[]) {
	int n;
	while(cin >> n)
		cout << foo(n) << endl;
	return 0;	
}