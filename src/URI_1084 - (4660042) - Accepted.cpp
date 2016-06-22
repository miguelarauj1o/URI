#include <stdio.h>

typedef struct st { int cont[100001], ind; } st;
char x[100001];
st p;

int del(st * p) { return p -> cont[p -> ind--]; }
void put(int v, st * p) { p -> cont[++p -> ind] = v; }
 
int main(int argc, char *argv[]) {
	int n, d, r;

	while (scanf("%d%d", &n, &d) == 2 && (n || d)) {
		p.ind = 0;
		
		scanf("%s", x);
		for (int i = 0; i < n; i++) {
			while (p.cont[p.ind] < x[i]-'0' && d > 0 && p.ind > 0)
				r = del(&p), d--;
			put(x[i]-'0', &p);
		}

		while (d--) 
			del(&p);
 
		for (int i = 1; i <= p.ind; i++) 
			printf("%d", p.cont[i]);
		 
		printf("\n");
	}

	return 0;
}#include <stdio.h>

typedef struct st { int cont[100001], ind; } st;
char x[100001];
st p;

int del(st * p) { return p -> cont[p -> ind--]; }
void put(int v, st * p) { p -> cont[++p -> ind] = v; }
 
int main(int argc, char *argv[]) {
	int n, d, r;

	while (scanf("%d%d", &n, &d) == 2 && (n || d)) {
		p.ind = 0;
		
		scanf("%s", x);
		for (int i = 0; i < n; i++) {
			while (p.cont[p.ind] < x[i]-'0' && d > 0 && p.ind > 0)
				r = del(&p), d--;
			put(x[i]-'0', &p);
		}

		while (d--) 
			del(&p);
 
		for (int i = 1; i <= p.ind; i++) 
			printf("%d", p.cont[i]);
		 
		printf("\n");
	}

	return 0;
}