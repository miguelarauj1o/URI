#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
 
typedef struct objs { int s, e; } objs;
objs o[1000001];

int cmpi (objs * o1, objs * o2) {
	if (o1 -> e < o2 -> e) return 1;
	else return -1;
}

int cmpf (objs * o1, objs * o2) {
	if (o1 -> s > o2 -> s) return 1;
	else if (o1 -> s < o2 -> s) return -1;
	else return cmpi(o1, o2);
}

int main(int argc, char const *argv[]) {
	int n, i, j, k, r, b, t;
 
	while (scanf("%d", &n) != EOF) {
		r = 0;
		
		for (int i = 0; i < n; i++)
			scanf("%d%d", &o[i].s, &o[i].e);
 
		qsort(o, n, sizeof(objs), (int (*) (const void *, const void *)) cmpf);
 
		for (int i = 0; i < n; i++ ) {
			if (i < n-1 && o[i+1].s <= o[i].e) {
				k = i, j = i+1, b = max(o[i].s, o[i+1].s), t = min(o[i].e, o[i+1].e), r++;
				
				while (i < n && j < n && o[i].e == o[j].e && o[i].s == o[j].s)
					j++, i++;

				while (i < n && j < n && !((o[j].s > t) || (o[j].e < b))) {
					b = max(o[j].s, b), t = min(o[j].e, t), j++, i++;

					while (i < n && j < n && o[i].e == o[j].e && o[i].s == o[j].s)
						j++, i++;
				}
			} else r++;
		}
		
		printf("%d\n", r);
	}

	return 0;
}#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
 
typedef struct objs { int s, e; } objs;
objs o[1000001];

int cmpi (objs * o1, objs * o2) {
	if (o1 -> e < o2 -> e) return 1;
	else return -1;
}

int cmpf (objs * o1, objs * o2) {
	if (o1 -> s > o2 -> s) return 1;
	else if (o1 -> s < o2 -> s) return -1;
	else return cmpi(o1, o2);
}

int main(int argc, char const *argv[]) {
	int n, i, j, k, r, b, t;
 
	while (scanf("%d", &n) != EOF) {
		r = 0;
		
		for (int i = 0; i < n; i++)
			scanf("%d%d", &o[i].s, &o[i].e);
 
		qsort(o, n, sizeof(objs), (int (*) (const void *, const void *)) cmpf);
 
		for (int i = 0; i < n; i++ ) {
			if (i < n-1 && o[i+1].s <= o[i].e) {
				k = i, j = i+1, b = max(o[i].s, o[i+1].s), t = min(o[i].e, o[i+1].e), r++;
				
				while (i < n && j < n && o[i].e == o[j].e && o[i].s == o[j].s)
					j++, i++;

				while (i < n && j < n && !((o[j].s > t) || (o[j].e < b))) {
					b = max(o[j].s, b), t = min(o[j].e, t), j++, i++;

					while (i < n && j < n && o[i].e == o[j].e && o[i].s == o[j].s)
						j++, i++;
				}
			} else r++;
		}
		
		printf("%d\n", r);
	}

	return 0;
}