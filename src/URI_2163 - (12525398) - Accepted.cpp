#include <iostream>
using namespace std;

int main() {
	int x, y, i, j, q = 0, w = 0;
	
	cin >> x >> y;
	int arr[x][y];
	
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			cin >> arr[i][j];
		}
	}
	
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			if (arr[i][j] == 42) {
				if (arr[i-1][j-1] == 7 && arr[i-1][j] == 7 && arr[i-1][j+1] == 7 &&
					arr[i][j-1] == 7 && arr[i][j+1] == 7 && 
					arr[i+1][j-1] == 7 && arr[i+1][j] == 7 && arr[i+1][j+1] == 7) {
						q = i + 1, w = j + 1;
					}
			}
		}
	}
	
	cout << q << " " << w << endl;
}