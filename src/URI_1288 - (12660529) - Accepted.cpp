#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int v[51], w[51], m[51][101];

int main(int argc, char const *argv[]) {
	int n, k, t, r, a, i, j;
	
	scanf("%d", &t);
	for (a = 0; a < t; a++){
		memset(m, 0, sizeof m[0][0]);
		
		scanf("%d",&n);
		for (i = 0; i < n; i++)
			scanf("%d%d", &v[i], &w[i]);
		
		scanf("%d%d", &k, &r);
		for (i = 1; i <= k; i++){
			for (j = 0; j < n; j++){
				if(j > 0){
					m[j][i] = m[j-1][i];
					if (w[j] <= i) 
						m[j][i] = max(m[j][i], m[j - 1][i - w[j]] + v[j]);
				} else {
					m[j][i] = 0;
					if(w[j] <= i) 
						m[j][i] = max(m[j][i], v[j]);
				}
			}
		}
		
		if (m[n - 1][k] >= r) puts("Missao completada com sucesso");
		else puts("Falha na missao");
	}
	return 0;
}