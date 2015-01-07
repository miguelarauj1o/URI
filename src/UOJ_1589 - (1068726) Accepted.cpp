#include <cstdio>
using namespace std;

int main()
{
	int t, x, y;
	scanf("%i", &t);

	for (int i = 0; i < t; ++i)
	{
		scanf("%i %i", &x, &y);
		printf("%i\n", (x + y));
	}

	return 0;
}