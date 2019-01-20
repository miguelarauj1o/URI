#include <iostream>
#define MAX 5
using namespace std;

bool found;
bool grid[MAX][MAX];
bool visited[MAX][MAX];

bool find(int x, int y);
void clear();

int main() {
	int t, i, j;
	
	cin >> t;
	while (t--) {
		found = false;
		clear();
		
		for (i = 0; i < MAX; i++) {
			for (j = 0; j < MAX; j++) {
				cin >> grid[i][j];
				if (grid[i][j])
					visited[i][j] = true;
			}
		}
		
		
		(find(0, 0)) ? puts("COPS"): puts("ROBBERS");
	}

	return 0;
}

void clear() {
	for (int i = 0; i < MAX; i++)
		for (int j = 0; j < MAX; j++)
			visited[i][j] = false;
}

bool find(int x, int y) {
	visited[x][y] = true;
	if (x == MAX - 1 && y == MAX - 1)
		found = true;
		
	if (y - 1 >= 0 && !visited[x][y-1] && !grid[x][y-1])
		find(x, y - 1);
	
	if (x - 1 >= 0 && !visited[x-1][y] && !grid[x-1][y])
		find(x - 1, y);
	
	if (x + 1 < MAX && !visited[x+1][y] && !grid[x+1][y])
		find(x + 1, y);
	
	if (y + 1 < MAX && !visited[x][y+1] && !grid[x][y+1])
		find(x, y + 1);

	return found;
}
