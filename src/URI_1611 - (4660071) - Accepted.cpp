#include <stdio.h>
#include <stdlib.h>

int arr[100000];

int cmp(const void * a, const void * b) { return (* ( int* ) b - * ( int* ) a); }

int main(int argc, char const *argv[]) {
	int t, n, c, m, r;
 
	scanf("%d", &t);
	while(t--) {
		r = 0;
		scanf("%d%d%d", &n, &c, &m);
		for (int i = 0; i < m; i++)
			scanf("%d", &arr[i]);
		qsort(arr, m, sizeof (int), cmp);
 
		for(int i = 0; i < m; i += c)
			r += arr[i] * 2;
 
		printf("%d\n", r);
	}
 
	return 0;
}#include <stdio.h>
#include <stdlib.h>

int arr[100000];

int cmp(const void * a, const void * b) { return (* ( int* ) b - * ( int* ) a); }

int main(int argc, char const *argv[]) {
	int t, n, c, m, r;
 
	scanf("%d", &t);
	while(t--) {
		r = 0;
		scanf("%d%d%d", &n, &c, &m);
		for (int i = 0; i < m; i++)
			scanf("%d", &arr[i]);
		qsort(arr, m, sizeof (int), cmp);
 
		for(int i = 0; i < m; i += c)
			r += arr[i] * 2;
 
		printf("%d\n", r);
	}
 
	return 0;
}