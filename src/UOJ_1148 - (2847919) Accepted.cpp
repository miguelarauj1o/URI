#include <cstdio>
#include <stdlib.h>
#include <limits.h>

using namespace std;

#define sc(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d%d", &a, &b)
#define sc3(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define INF 1 << 25

int matrix[501][501];

int dijkstra(int src, int des, int n) {
    int short_dis, nextv, i, j;
    int dist[n];
    bool corr[n];

    for (i = 1; i <= n; i++) {
        dist[i] = INF;
        corr[i] = false;
    }

    dist[src] = 0;

    for (i = 1; i <= n; i++) {
        short_dis = INF;

        if (corr[des]) break;

        for (j = 1; j <= n; j++) {
            if (dist[j] < short_dis && !corr[j]) {
                short_dis = dist[j];
                nextv = j;
            }
        }

        if (short_dis == INF) break;

        corr[nextv] = true;

        for (j = 1; j <= n; j++)
            if (short_dis + matrix[nextv][j] < dist[j])
                dist[j] = short_dis + matrix[nextv][j];
    }

    return dist[des];
}

int main(int argc, char const *argv[]) {
    int i, j, n, e, x, y, h, k, o, d, r;

    while(sc2(n, e) && (n || e)) {
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                matrix[i][j] = INF;

        while(e--) {
            sc3(x, y, h);
            matrix[x][y] = h;
            if(matrix[y][x] != INF)
                matrix[x][y] = matrix[y][x] = 0;
        }

        sc(k);

        for (i = 0; i < k; i++) {
            sc2(o, d);
            r = dijkstra(o, d, n);
            if(r == INF) printf("Nao e possivel entregar a carta\n");
            else printf("%d\n", r);
        }

        printf("\n");
    }

    return 0;
}