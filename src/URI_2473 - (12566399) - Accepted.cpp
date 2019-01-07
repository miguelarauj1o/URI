#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int n[6], r[6], i, v = 0;
	
	for (i = 0; i < 6; i++)
		cin >> n[i];
	
	for (i = 0; i < 6; i++)
		cin >> r[i];
	
	for (i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (r[j] == n[i]) {
				v++;
				break;
			}
		}
	}
	
	if (v < 3) {
		cout << "azar" << endl;
	} else if (v == 3) {
		cout << "terno" << endl;
	} else if (v == 4) {
		cout << "quadra" << endl;
	} else if (v == 5) {
		cout << "quina" << endl;
	} else {
		cout << "sena" << endl;
	}
}