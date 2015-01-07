#include <cstdio>
using namespace std;

int main()
{
	long double l, i, x;

	while(scanf("%Lf", &l) && l != 0)
	{
		i = ((l - 3) * 2) + 3;
		x = (i - l) / l;
		printf("%.6Lf\n", x);
	}

	return 0;
}