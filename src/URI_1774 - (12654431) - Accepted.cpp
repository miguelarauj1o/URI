#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

const int MAX = 1000;
int id[MAX], nodes, edges, weight;
pair<int, pair<int, int> > p[MAX];

void initialize() {
	for (int i = 0; i < MAX; ++i)
		id[i] = i;
}

int root(int x) {
	while(id[x] != x) {
		id[x] = id[id[x]];
		x = id[x];
	}
	
	return x;
}

void union1(int x, int y) {
	int p = root(x);
	int q = root(y);
	id[p] = id[q];
}

int kruskal(pair<int, pair<int, int> > p[]) {
	int x, y, cost, minCost = 0;
	
	for (int i = 0; i < edges; ++i) {
		x = p[i].second.first;
		y = p[i].second.second;
		cost = p[i].first;
		
		if (root(x) != root(y)) {
			minCost += cost;
			union1(x, y);
		}
	}
	
	return minCost;
}

int main() {
	int minCost = 0, v, w;
	initialize();
	
	cin >> nodes >> edges;
	for (int i = 0; i < edges; i++) {
		cin >> v >> w >> weight;
		p[i] = make_pair(weight, make_pair(v, w));
	}
	
	sort(p, p + edges);
	minCost = kruskal(p);
	cout << minCost << endl;
	return 0;
}