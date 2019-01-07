#include <stdio.h>
#include <math.h>

int main() {
	int x1, y1, x2, y2;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	printf("%d\n", abs(x1 - x2) + abs(y1 - y2));
	return 0;
}