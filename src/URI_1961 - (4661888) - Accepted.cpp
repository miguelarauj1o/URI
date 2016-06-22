#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n, p, prev, curr;
	bool b = true;

	scanf("%d%d%d", &p, &n, &prev);
	for (int i = 1; i < n; i++) {
		scanf("%d", &curr);
		if (p < curr - prev || prev - curr > p)
			b = false;
		prev = curr;
	}

	(b) ? puts("YOU WIN") : puts("GAME OVER");
	return 0;
}#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n, p, prev, curr;
	bool b = true;

	scanf("%d%d%d", &p, &n, &prev);
	for (int i = 1; i < n; i++) {
		scanf("%d", &curr);
		if (p < curr - prev || prev - curr > p)
			b = false;
		prev = curr;
	}

	(b) ? puts("YOU WIN") : puts("GAME OVER");
	return 0;
}