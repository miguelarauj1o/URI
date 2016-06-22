#include <stdio.h>
#include <string.h>
#define MAX 1111

int p[MAX];
int visi[MAX];
int mat[MAX][MAX];

int main(int argc, char const *argv[]) {
	int n, a, b, ba, i, s, v, pind;
	 
	while (scanf("%d", &n) == 1 && n) {
		scanf("\n");
		ba = 0;
		memset(mat, 0, sizeof(mat));
		memset(visi, 0, sizeof(visi));
 
		while (n--) {
			scanf("(%d,%d)%*c", &a, &b);
			mat[a][b] = mat[b][a] = 1;
			if (a > ba) ba = a;
			if (b > ba) ba = b;
		}
 
		s = 1, pind = 0, visi[1] = 1;
		 
		for (i = 2; i <= ba; i++)
			if (mat[1][i] == 1)
				pind++, p[pind] = i;
		 
		while (pind != 0) {
			v = p[pind], pind--;
			 
			if (visi[v] == 0) {
				for (i = 0; i <= ba; i++)
					if (mat[v][i] == 1)
						pind++, p[pind] = i;
				
				s++;
			}

			visi[v] = 1;
		}

		printf("%d\n", s);
	}

	return 0;
}#include <stdio.h>
#include <string.h>
#define MAX 1111

int p[MAX];
int visi[MAX];
int mat[MAX][MAX];

int main(int argc, char const *argv[]) {
	int n, a, b, ba, i, s, v, pind;
	 
	while (scanf("%d", &n) == 1 && n) {
		scanf("\n");
		ba = 0;
		memset(mat, 0, sizeof(mat));
		memset(visi, 0, sizeof(visi));
 
		while (n--) {
			scanf("(%d,%d)%*c", &a, &b);
			mat[a][b] = mat[b][a] = 1;
			if (a > ba) ba = a;
			if (b > ba) ba = b;
		}
 
		s = 1, pind = 0, visi[1] = 1;
		 
		for (i = 2; i <= ba; i++)
			if (mat[1][i] == 1)
				pind++, p[pind] = i;
		 
		while (pind != 0) {
			v = p[pind], pind--;
			 
			if (visi[v] == 0) {
				for (i = 0; i <= ba; i++)
					if (mat[v][i] == 1)
						pind++, p[pind] = i;
				
				s++;
			}

			visi[v] = 1;
		}

		printf("%d\n", s);
	}

	return 0;
}