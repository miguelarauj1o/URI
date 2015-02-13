#include <cstdio>

#define SC1(a) scanf("%d", &a)

int main(int argc, char const *argv[])
{
	int n, p, t;

	while(SC1(n) == 1)
	{
		p = 2; t = 1;

		while(p != 1)
		{
			if(p <= n/2) p += p;
			else p -= (n - p + 1);
			t++;
		}

		printf("%d\n", t);
	}

	return 0;
}