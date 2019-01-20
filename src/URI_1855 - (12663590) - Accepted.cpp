#include <iostream>
#define MAX 100
using namespace std;

char map[MAX][MAX];
bool visited[MAX][MAX] = {false};

bool find(int x, int y);

int main() {
	int x, y;
	
	cin >> y >> x;
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			cin >> map[i][j];
	
	bool found = find(x, y);
	(found) ? puts("*"): puts("!");
	return 0;
}

bool find(int x, int y) {
	bool hasChest = false, onMap = true;
	bool ip = false, jp = false, in = false, jn = false;
	int i = 0, j = 0;
	
	while (!hasChest && onMap && !visited[i][j]) {
		visited[i][j] = true;
		if (map[i][j] == '>') 
			j++, ip = false, jp = true, in = false, jn = false;
		else if (map[i][j] == '<')
			j--, ip = false, jp = false, in = false, jn = true;
		else if (map[i][j] == '^')
			i--, ip = false, jp = false, in = true, jn = false;
		else if (map[i][j] == 'v')
			i++, ip = true, jp = false, in = false, jn = false;
		else if (map[i][j] == '.') {
			if (ip) i++;
			else if (jp) j++;
			else if (in) i--; 
			else j--;
		} else {// map[i][y] == '*'
			hasChest = true;
		}
		
		if (i == x || j == y) // off the map
			onMap = false;
	}
	
	return hasChest;
}
