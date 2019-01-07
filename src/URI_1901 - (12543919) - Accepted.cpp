#include <iostream>
using namespace std;
#define SIZE 1001

int main() {
	int n, i, j, x, y, count = 0, tmp;
	bool species[SIZE] = {false};
	
	cin >> n;
	int grid[n][n];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> grid[i][j];
	
	for (i = 0; i < (n * 2); i++) {
		cin >> x >> y;
		species[grid[x-1][y-1]] = true;
	}
	
	for (i = 0; i < SIZE; i++)
		if (species[i])
			count++;
	
	cout << count << endl;
	return 0;
}