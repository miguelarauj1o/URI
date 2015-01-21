#include <cstdio>

#define SC1(a) scanf("%d", &a)

using namespace std;

typedef long long int LLI;

const LLI MOD = 1000000009, INV = 833333341;

LLI fat[100001];

int main(int argc, char const *argv[])
{
	int n;

	fat[1] = 1;
	for(LLI i = 2; i < 100001; i++)
		fat[i] = (i * fat[i-1]) % MOD;

	while(SC1(n) && n)
		printf("%lld\n", (fat[n] * INV) % MOD);

	return 0;
}