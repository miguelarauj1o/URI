#include <stdio.h>
#include <stdlib.h>

int arr[100001];

int cmp(const void * a, const void * b) { return (* ( int* ) a - * ( int* ) b); }

int main ( int argc, char *argarr[] ) {
	int t, s, c;
	double r, res;
 
	scanf("%d", &t);
	while (t--) {
		res = 0.0;
		scanf("%d%d%lf", &s, &c, &r);
		for (int i = 0; i < s; i++)
			scanf("%d", &arr[i]);

		qsort(arr, s, sizeof(int), cmp);

		for (int i = 0; i < c; i++)
			res += 1.0 / ((double) arr[i] * 1.0 + r * 1.0);
 
		for (int i = c; i < s; i++)
			res += 1.0 / ((double) arr[i] * 1.0);
 
		printf("%.2lf\n", res);
	}
 
	return 0;
}#include <stdio.h>
#include <stdlib.h>

int arr[100001];

int cmp(const void * a, const void * b) { return (* ( int* ) a - * ( int* ) b); }

int main ( int argc, char *argarr[] ) {
	int t, s, c;
	double r, res;
 
	scanf("%d", &t);
	while (t--) {
		res = 0.0;
		scanf("%d%d%lf", &s, &c, &r);
		for (int i = 0; i < s; i++)
			scanf("%d", &arr[i]);

		qsort(arr, s, sizeof(int), cmp);

		for (int i = 0; i < c; i++)
			res += 1.0 / ((double) arr[i] * 1.0 + r * 1.0);
 
		for (int i = c; i < s; i++)
			res += 1.0 / ((double) arr[i] * 1.0);
 
		printf("%.2lf\n", res);
	}
 
	return 0;
}