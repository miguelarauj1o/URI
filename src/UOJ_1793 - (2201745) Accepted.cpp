#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, b, r, t;

	while(scanf("%d", &n) != EOF && n)
	{
		b = -1000, r = 10;

		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &t);
			if(i) r += (int) min(t - b, 10);
			b = t;
		}

		printf("%d\n", r);
	}

	return 0;
}