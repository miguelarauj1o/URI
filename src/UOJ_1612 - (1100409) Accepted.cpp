#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int n, r;
	double x;

	scanf("%i", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%lf", &x);
		r = ceil(x/2);
		printf("%i\n", r);
	}

	return 0;
}