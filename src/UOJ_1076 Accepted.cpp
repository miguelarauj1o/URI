#include <iostream>
#include <cstdio>

#define maxV 100
#define Vertex int

using namespace std;

int cnt, lbl[maxV];
int V,A, adj[100][100];
int entrou = 0;
int conta;

void pathR (Vertex v) {
    Vertex w;
    lbl[v] = cnt++;

    for (w = 0; w < V; w++) {
        if (adj[v][w] == 1) {
            if (lbl[w] == -1) { /// se nao percorreu ainda
                conta++;
                pathR(w);
            }
        }
    }
}


int main(void) {
  //  freopen("1076-a.in","r",stdin);
    int N,orig,dest,saida;
    Vertex v;
    cin >> N;
    while (N--) {
        conta=0;
        cin >> saida; /// origem
        cin >> V; ///Vertices
        /// Zera a Matriz de Adjacência
        for (int i=0; i<V; i++) {
            for (int j=0; j<V; j++) {
                adj[i][j]=0;
            }
        }
        cin >> A; ///Arestas
        for (int i=0; i<A; i++) {
            cin >> orig >> dest;
            adj[orig][dest]=1;
            adj[dest][orig]=1;
        }
        for (v = 0; v < V; v++) {
            lbl[v] = -1;
        }
        cnt = 0;
        pathR (saida);
        cout << conta * 2 << endl;
    }
    return(0);
}
