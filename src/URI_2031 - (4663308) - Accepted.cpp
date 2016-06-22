#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	string j1, j2;

	scanf("%d", &n);
	while (n--) {
		cin >> j1 >> j2;

		if (j1 == "ataque" && j2 == "ataque") puts("Aniquilacao mutua");
		if (j1 == "pedra" && j2 == "pedra") puts("Sem ganhador");
		if (j1 == "papel" && j2 == "papel") puts("Ambos venceram");
		if (j1 == "papel" && j2 == "ataque") puts("Jogador 2 venceu");
		if (j1 == "ataque" && j2 == "papel") puts("Jogador 1 venceu");
		if (j1 == "pedra" && j2 == "papel") puts("Jogador 1 venceu");
		if (j1 == "papel" && j2 == "pedra") puts("Jogador 2 venceu");
		if (j1 == "ataque" && j2 == "pedra") puts("Jogador 1 venceu");
		if (j1 == "pedra" && j2 == "ataque") puts("Jogador 2 venceu");
	}

	return 0;
}#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	string j1, j2;

	scanf("%d", &n);
	while (n--) {
		cin >> j1 >> j2;

		if (j1 == "ataque" && j2 == "ataque") puts("Aniquilacao mutua");
		if (j1 == "pedra" && j2 == "pedra") puts("Sem ganhador");
		if (j1 == "papel" && j2 == "papel") puts("Ambos venceram");
		if (j1 == "papel" && j2 == "ataque") puts("Jogador 2 venceu");
		if (j1 == "ataque" && j2 == "papel") puts("Jogador 1 venceu");
		if (j1 == "pedra" && j2 == "papel") puts("Jogador 1 venceu");
		if (j1 == "papel" && j2 == "pedra") puts("Jogador 2 venceu");
		if (j1 == "ataque" && j2 == "pedra") puts("Jogador 1 venceu");
		if (j1 == "pedra" && j2 == "ataque") puts("Jogador 2 venceu");
	}

	return 0;
}