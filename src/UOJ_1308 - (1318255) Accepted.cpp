#include <cstdio>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	long double n, x, r;
	scanf("%Lf", &n);

	while(n--)
	{
		scanf("%Lf", &x);
		r = (sqrt(1 + 8 * x) - 1) / 2;
		printf("%d\n", (int)r);
	}
	return 0;
}