#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX 9999.99999

typedef struct stp{ double x, y; } Point;
Point p[10001];

double min(double a, double b) {
	if(a < b) return a;
	return b;
}

double dist(Point &p1, Point &p2) {
	double d = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	if (d > MAX) 
		d = MAX + 1.0;
	return d;
}

int cmp(const void *a, const void *b) {
	Point *sp1 = (Point *)a;
	Point *sp2 = (Point *)b;
	if(sp1 -> x > sp2 -> x) 
		return 1;
	else if(sp1 -> x < sp2 -> x) 
		return -1;
	else{
		 if(sp1 -> y > sp2 -> y) return 1;
		 else return -1;
	}

	return -1;
}

double closest(long a, long b) {
	double d1, d2, d, xp;
	long i, j, k;
	
	if(a == b) 
		return MAX + 1.0;
	else if(b - a == 1) 
		return dist(p[b], p[a]);
	else {
		d1 = closest(a, (a + b) / 2), d2 = closest((a + b) / 2 + 1, b);
		d = min(d1, d2), j = (a + b) / 2, xp = p[j].x;

		do {
			k = (a + b) / 2 + 1;
			while(xp - p[k].x < d && k <= b)
				d1 = dist(p[k], p[j]), d = min(d, d1), k++;
			j--;
		}while (xp - p[j].x < d && j >= a);

	return d;
	}
}

int main(int argc, char const *argv[]) {
	int n;
	double d;
	
	while (scanf("%d", &n) == 1 && n) {
		for(int i = 0; i < n; i++) 
			scanf("%lf%lf", &p[i].x, &p[i].y);
		
		qsort(p, n, sizeof (p[0]), cmp);	
		d = closest(0, n - 1);
		(d > MAX) ? puts("INFINITY") : printf("%.4lf\n", d);
	}

	return 0;
}#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX 9999.99999

typedef struct stp{ double x, y; } Point;
Point p[10001];

double min(double a, double b) {
	if(a < b) return a;
	return b;
}

double dist(Point &p1, Point &p2) {
	double d = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	if (d > MAX) 
		d = MAX + 1.0;
	return d;
}

int cmp(const void *a, const void *b) {
	Point *sp1 = (Point *)a;
	Point *sp2 = (Point *)b;
	if(sp1 -> x > sp2 -> x) 
		return 1;
	else if(sp1 -> x < sp2 -> x) 
		return -1;
	else{
		 if(sp1 -> y > sp2 -> y) return 1;
		 else return -1;
	}

	return -1;
}

double closest(long a, long b) {
	double d1, d2, d, xp;
	long i, j, k;
	
	if(a == b) 
		return MAX + 1.0;
	else if(b - a == 1) 
		return dist(p[b], p[a]);
	else {
		d1 = closest(a, (a + b) / 2), d2 = closest((a + b) / 2 + 1, b);
		d = min(d1, d2), j = (a + b) / 2, xp = p[j].x;

		do {
			k = (a + b) / 2 + 1;
			while(xp - p[k].x < d && k <= b)
				d1 = dist(p[k], p[j]), d = min(d, d1), k++;
			j--;
		}while (xp - p[j].x < d && j >= a);

	return d;
	}
}

int main(int argc, char const *argv[]) {
	int n;
	double d;
	
	while (scanf("%d", &n) == 1 && n) {
		for(int i = 0; i < n; i++) 
			scanf("%lf%lf", &p[i].x, &p[i].y);
		
		qsort(p, n, sizeof (p[0]), cmp);	
		d = closest(0, n - 1);
		(d > MAX) ? puts("INFINITY") : printf("%.4lf\n", d);
	}

	return 0;
}