#include <iostream>
using namespace std;
#define MAX 501

int main() {
	int p, r, i, j, tmp, winner = 0;

	cin >> p >> r;
	int arr[MAX] = {0};

	for (i = 0; i < r; i++) {
		for (j = 0; j < p; j++) {
			cin >> tmp;
			arr[j] += tmp;
		}
	}

	tmp = -1;
	for (i = 0; i < p; i++) {
		if (arr[i] >= tmp) {
			tmp = arr[i], winner = i;
		}
	}

	cout << winner + 1 << endl;
	return 0;
}