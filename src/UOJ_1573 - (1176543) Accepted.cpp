#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c, v, x;

	while(scanf("%i %i %i", &a, &b, &c) && (a || b || c))
	{
		v = a * b * c;
		x = (int) cbrt(v);
		printf("%i\n", x);
	}

	return 0;
}