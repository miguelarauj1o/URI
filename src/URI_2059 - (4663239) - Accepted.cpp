#include <stdio.h>

int main(int argc, char const *argv[]) {
	int p, j1, j2, r, a;
	scanf("%d%d%d%d%d", &p, &j1, &j2, &r, &a);
	if (r == 1 && a == 1) puts("Jogador 2 ganha!");
	else if (r == 0 && a == 1) puts("Jogador 1 ganha!");
	else if (r == 1 && a == 0) puts("Jogador 1 ganha!");
	else {
		if ((j1 + j2) % 2 == 0 && p == 1) puts("Jogador 1 ganha!");
		else if ((j1 + j2) % 2 == 0 && p == 0) puts("Jogador 2 ganha!");
		else if ((j1 + j2) % 2 != 0 && p == 1) puts("Jogador 2 ganha!");
		else puts("Jogador 1 ganha!");
	}

	return 0;
}#include <stdio.h>

int main(int argc, char const *argv[]) {
	int p, j1, j2, r, a;
	scanf("%d%d%d%d%d", &p, &j1, &j2, &r, &a);
	if (r == 1 && a == 1) puts("Jogador 2 ganha!");
	else if (r == 0 && a == 1) puts("Jogador 1 ganha!");
	else if (r == 1 && a == 0) puts("Jogador 1 ganha!");
	else {
		if ((j1 + j2) % 2 == 0 && p == 1) puts("Jogador 1 ganha!");
		else if ((j1 + j2) % 2 == 0 && p == 0) puts("Jogador 2 ganha!");
		else if ((j1 + j2) % 2 != 0 && p == 1) puts("Jogador 2 ganha!");
		else puts("Jogador 1 ganha!");
	}

	return 0;
}