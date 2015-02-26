#include <cstdio>

#define SC1(a) scanf("%d", &a)
#define SC3(a, b, c) scanf("%d %lf %lf", &a, &b, &c)
#define FOR(i, n) for(int i = 1; i <= (n); ++i)

using namespace std;

int main(int argc, char const *argv[])
{
	int t, q;
	double a, b;

	while(SC1(t) && t)
	{
		FOR(i, t)
		{
			SC3(q, a, b);
			printf("Size #%d:\n", i);
			printf("Ice Cream Used: %.2lf cm2\n", (((a + b) * 5.0) / 2) * q);
		}

		printf("\n");
	}

	return 0;
}