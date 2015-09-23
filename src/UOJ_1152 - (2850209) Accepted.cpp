#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

#define sc2(a, b) scanf("%d%d", &a, &b)
#define sc3(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define MAX 200000

struct Grafo { int x, y, v; };

int c;
int fat[MAX];
Grafo grafo[MAX];

int cmp(const void *a, const void *b) {
    return (*(struct Grafo *)a).v - (*(struct Grafo *)b).v;
}

void makeset(int n) {
    for (int i = 0; i < n; i++)
        fat[i] = i;
}

int find(int n) {
    if(fat[n] != n)
        fat[n] = find(fat[n]);
    return fat[n];
}

int unionp(int x, int y, int p) {
    int i = find(x), j = find(y);

    if(i != j) {
        c -= grafo[p].v;
        if(i > j) fat[i] = j;
        else fat[j] = i;
        return 1;
    }

    return 0;
}

int main(int argc, char const *argv[]) {
    int m, n, i;

    while(sc2(m, n) && (m || n)) {
        c = 0;
        memset(&grafo, 0, sizeof(grafo));

        for (i = 0; i < n; i++) {
            sc3(grafo[i].x, grafo[i].y, grafo[i].v);
            c += grafo[i].v;
        }

        makeset(m);
        qsort(grafo, n, sizeof(grafo[0]), cmp);
        for (i = 0; i < n; ++i)
            unionp(grafo[i].x, grafo[i].y, i);
        printf("%d\n", c);
    }

    return 0;
}