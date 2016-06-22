#include <stdio.h>
#include <string.h>
 
double gh[101][101];
 
void floydwarshall(int n) {
	for(int k = 0; k < n; k++) {
		for(int i = 0; i < n; i++) {
			if(i == k) 
				continue;
			for(int j = 0; j < n; j++) {
				if(j == k || j == i) 
					continue;
				if(gh[i][k] * gh[k][j] > gh[i][j] && gh[i][k] && gh[k][j])
					gh[i][j] = gh[i][k] * gh[k][j];
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int n, m, a, b;
	double w;

	while (scanf("%d%d", &n, &m) == 2 && n) {
		memset(gh, 0.0, sizeof(gh));

		for(int i = 0; i < m; ++i) {
			scanf("%d%d%lf", &a, &b, &w);
			gh[a - 1][b - 1] = gh[b - 1][a - 1] = 0.01 * w;
		}

		floydwarshall(n);
		printf("%.6lf percent\n", gh[0][n - 1] * 100);
	}
}#include <stdio.h>
#include <string.h>
 
double gh[101][101];
 
void floydwarshall(int n) {
	for(int k = 0; k < n; k++) {
		for(int i = 0; i < n; i++) {
			if(i == k) 
				continue;
			for(int j = 0; j < n; j++) {
				if(j == k || j == i) 
					continue;
				if(gh[i][k] * gh[k][j] > gh[i][j] && gh[i][k] && gh[k][j])
					gh[i][j] = gh[i][k] * gh[k][j];
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int n, m, a, b;
	double w;

	while (scanf("%d%d", &n, &m) == 2 && n) {
		memset(gh, 0.0, sizeof(gh));

		for(int i = 0; i < m; ++i) {
			scanf("%d%d%lf", &a, &b, &w);
			gh[a - 1][b - 1] = gh[b - 1][a - 1] = 0.01 * w;
		}

		floydwarshall(n);
		printf("%.6lf percent\n", gh[0][n - 1] * 100);
	}
}