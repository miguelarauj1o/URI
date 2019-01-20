#include <iostream>
#include <list>
#include <limits.h>
using namespace std;

class Graph {
	int V;
	list<int> *adj;
	bool isCyclicUtil(int v, bool visited[], bool *rs);	
	
	public:
		Graph(int V);
		void addEdge(int v, int w);
		bool isCyclic();
};
	
Graph::Graph(int V) {
	this -> V = V;
	adj = new list<int>[V];
}
	
void Graph::addEdge(int v, int w) {
	adj[v].push_back(w);
}
	
bool Graph::isCyclicUtil(int v, bool visited[], bool *recStack) {
	if (!visited[v]) {
		visited[v] = recStack[v] = true;
		
		list<int>::iterator i;
		for (i = adj[v].begin(); i != adj[v].end(); i++) {
			if (!visited[*i] && isCyclicUtil(*i, visited, recStack)) {
				return true;
			} else if (recStack[*i]) {
				return true;
			}
		}
	}
		
	recStack[v] = false;
	return false;
}
	
bool Graph::isCyclic() {
	bool *visited = new bool[V];
	bool *recStack = new bool[V];
		
	for (int i = 0; i < V; i++) {
		visited[i] = recStack[i] = false;
	}
			
	for (int i = 0; i < V; i++)
		if (isCyclicUtil(i, visited, recStack))
			return true;
		
	return false;
}

int main() {
	int t, v, e, a, b;
	
	cin >> t;
	while (t--) {
		cin >> v >> e;
		Graph g(v + 1);
		
		for (int i = 0; i < e; i++) {
			cin >> a >> b;
			g.addEdge(a, b);
		}
		
		(g.isCyclic()) ? puts("SIM"): puts("NAO");
	}
	
	return 0;
}