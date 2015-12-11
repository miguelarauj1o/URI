#include <stdio.h>
#include <string.h>

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
char mat[102][103], co[50004];
char ref[4] = {'N', 'L', 'S', 'O'};

int main(int argc, char const *argv[]) {
    int i, j, t, x, d, n, m, s, pi, pj;

    while (scanf("%d %d %d", &n, &m, &s) != EOF && (n || m || s)) {
        x = 0;
        for (i = 0; i < n; i++) {
            scanf("%s ", mat[i]);
            for (j = 0; j < m; j++) {
                t = mat[i][j];
                if (t == 'N' || t == 'O' || t == 'L' || t == 'S')
                    pi = i, pj = j;
            }
        }

        for (i = 0; i < 4; i++)
            if (mat[pi][pj] == ref[i])
                d = i, i = 4;

        scanf("%s ", co);

        for (i = 0; i < s; i++) {
            if (co[i] == 'E') {
                d = (d + 3) % 4;
            }else if(co[i] == 'D') {
                d = (d + 1) % 4;
            }else if (pi + dx[d] != n && pj + dy[d] != m && pi + dx[d] >= 0 && pj + dy[d] >= 0) {
                t = mat[pi + dx[d]][pj + dy[d]];
                if (t != '#') {
                    mat[pi][pj] = '.';
                    if(t == '*')
                        x++;
                    pi += dx[d], pj += dy[d];
                }
            }
        }

        printf("%d\n", x);
    }

    return 0;
}