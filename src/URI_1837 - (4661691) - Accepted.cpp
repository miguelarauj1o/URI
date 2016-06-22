#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int a, b, q, r;
	
	cin >> a >> b;
	q = a / b, r = a % b;
	if(a < 0 && b < 0) {
		if(r < 0 && q <= 0) q++, r =- (b * q) + a;
		else if(r < 0 && q > 0) q++, r =- (b * q) + a;
	} else {
		if(r < 0 && q <= 0) q--, r =- (b * q) + a;
		else if(r < 0 && q > 0) q++, r =- (b * q) + a;
	}

	cout << q << " " << r << endl;
	return 0;
}
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int a, b, q, r;
	
	cin >> a >> b;
	q = a / b, r = a % b;
	if(a < 0 && b < 0) {
		if(r < 0 && q <= 0) q++, r =- (b * q) + a;
		else if(r < 0 && q > 0) q++, r =- (b * q) + a;
	} else {
		if(r < 0 && q <= 0) q--, r =- (b * q) + a;
		else if(r < 0 && q > 0) q++, r =- (b * q) + a;
	}

	cout << q << " " << r << endl;
	return 0;
}
