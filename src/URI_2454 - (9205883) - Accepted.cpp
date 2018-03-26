#include <cstdio>

int main(int argc, char const *argv[]) {
	int p, r;
	scanf("%d%d", &p, &r);
	if (p == 0) printf("C\n");
	else if (r == 0) printf("B\n");
	else printf("A\n");
	return 0;
}