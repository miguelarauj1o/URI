#include <cstdio>

#define SC1(a) scanf("%d", &a)
#define FOR(i, n) for(int i = 0; i < (n); ++i)
#define REP(i, a, b) for (int i = (a); i < (b); ++i)

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, j, k, t;

	while(SC1(n) == 1)
	{
		i = 1;
		t = n/2;

		while(i <= n)
		{
			for (j = 0; j < t; ++j)
				printf(" ");
			for (j = 0; j < i; ++j)
				printf("*");

			i += 2;
			t--;
			printf("\n");
		}

		i = 1;
		t = n/2;

		while(i <= 3)
		{
			for (j = 0; j < t; ++j)
				printf(" ");
			for (j = 0; j < i; ++j)
				printf("*");

			i += 2;
			t--;
			printf("\n");
		}

		printf("\n");
	}

	return 0;
}