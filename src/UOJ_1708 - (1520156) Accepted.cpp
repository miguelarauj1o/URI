#include <cstdio>

#define SC2(a, b) scanf("%d %d", &a, &b)

using namespace std;

int main(int argc, char const *argv[])
{
	int x, y, dx, dy, r;

	while(SC2(x, y) == 2)
	{
		dx = dy = 0;
		r = 1;

		while(1)
		{
			if((dy - dx) >= x)
				break;
			r++;
			dx += x;
			dy += y;
		}

		printf("%d\n", r);
	}

	return 0;
}