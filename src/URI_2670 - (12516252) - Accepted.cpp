#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int arr[3], v, t;
	cin >> arr[0] >> arr[1] >> arr[2];
	v = (2 * arr[1]) + (4 * arr[2]);
	t = (2 * arr[0]) + (2 * arr[2]);
	if (t < v) {
		v = t;
	}
	t = (4 * arr[0]) + (2 * arr[1]);
	if (t < v) {
		v = t;
	}
	
	cout << v << endl;
}