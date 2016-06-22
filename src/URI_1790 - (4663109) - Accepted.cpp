#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 111

int p[MAX];
int visi[MAX];
int mat[MAX][MAX];

int dfs(int n) {
	memset(visi, 0, sizeof(visi));
	int s = 0, pind = 0, v;
	visi[1] = 1;
 
	for (int i = 2; i <= n; i++)
		if (mat[1][i] == 1)
			pind++, p[pind] = i;
 
	while (pind != 0) {
		v = p[pind], pind--;
 
		if (visi[v] == 0) {
			for (int i = 0; i <= n; i++)
				if (mat[v][i] == 1)
					pind++, p[pind] = i;
			s++;
		}

		visi[v] = 1;
	}

	return s;
}
 
int bridge(int n) {
	int r = 0, bef, aft;
 
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (mat[i][j] == 1) {
				bef = dfs(n);
				mat[i][j] = 0, mat[j][i] = 0;
				aft = dfs(n);
				mat[i][j] = 1, mat[j][i] = 1;
				if (aft != bef)
					r++;
			}
		}
	}

	return r;
}

int main(int argc, char const *argv[]) {
	int c, p, v1, v2;
 
	while (scanf("%d%d", &c, &p) == 2) {
		memset(mat, 0, sizeof(mat));
		for (int i = 0; i < p; i++) {
			scanf("%d%d", &v1, &v2);
			mat[v1][v2] = mat[v2][v1] = 1;
		}

		printf("%d\n", bridge(c));
	}
 
	return 0;
}#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 111

int p[MAX];
int visi[MAX];
int mat[MAX][MAX];

int dfs(int n) {
	memset(visi, 0, sizeof(visi));
	int s = 0, pind = 0, v;
	visi[1] = 1;
 
	for (int i = 2; i <= n; i++)
		if (mat[1][i] == 1)
			pind++, p[pind] = i;
 
	while (pind != 0) {
		v = p[pind], pind--;
 
		if (visi[v] == 0) {
			for (int i = 0; i <= n; i++)
				if (mat[v][i] == 1)
					pind++, p[pind] = i;
			s++;
		}

		visi[v] = 1;
	}

	return s;
}
 
int bridge(int n) {
	int r = 0, bef, aft;
 
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (mat[i][j] == 1) {
				bef = dfs(n);
				mat[i][j] = 0, mat[j][i] = 0;
				aft = dfs(n);
				mat[i][j] = 1, mat[j][i] = 1;
				if (aft != bef)
					r++;
			}
		}
	}

	return r;
}

int main(int argc, char const *argv[]) {
	int c, p, v1, v2;
 
	while (scanf("%d%d", &c, &p) == 2) {
		memset(mat, 0, sizeof(mat));
		for (int i = 0; i < p; i++) {
			scanf("%d%d", &v1, &v2);
			mat[v1][v2] = mat[v2][v1] = 1;
		}

		printf("%d\n", bridge(c));
	}
 
	return 0;
}