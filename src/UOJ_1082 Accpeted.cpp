#include <iostream>
#include <cstdio>

#define maxV 10000
#define Vertex int

using namespace std;

int cnt, lbl[maxV];
int V, A, adj[100][100];
int achou,segmentos;

void pathR (Vertex v) {
    Vertex w;
    lbl[v] = cnt++;
    for (w = 0; w < V; w++) {
        if (adj[v][w] == 1) {
            achou =1;
            if (lbl[w] == -1) {
                pathR(w);
            }
        }
    }
}

void DIGRAPHpath (void) {
    Vertex v;
    for (v = 0; v < V; v++) {
        lbl[v] = -1;
    }
    for (v = 0; v < V; v++) {
        if (lbl[v] == -1) {
            cout << endl ;
            segmentos++;
            cnt = 1;
            pathR(v);

            for (int i = 0; i < V; i++) {
                if (lbl[i] > 0)   {
                    cout << char ('a'+i) <<",";
                    lbl[i]=0;
                }
            }
        }
    }
}

int main() {
    char orig,dest;
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++) {
        cin >> V; ///Vertices
        for (int j=0; j<V; j++) {
            for (int k=0; k<V; k++) {
                adj[j][k]=0;
            }
        }
        cin >> A; ///Arestas
        for (int j=0; j<A; j++) {
            cin >> orig >> dest;
            adj[orig-'a'][dest-'a']++;
            adj[dest-'a'][orig-'a']++;
        }
        segmentos=0;
        cout << "Case #" << (i+1) << ":";
        DIGRAPHpath ();
    cout <<endl<<segmentos<<" connected components\n\n";
    }
    return 0;
}
