#include <cstdio>

#define sc1(a) scanf("%d", &a)
#define for(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int x, y, v, n;

void maja()
{
	while(true)
	{
		if(n == 1) return;

		v++, y++, n--;

		if(n == 1) return;

		for(i, (v - 1))
		{
			x--;
			y++;
			if(--n == 1) return;
		}

		for(i, v)
		{
			x--;
			if(--n == 1) return;
		}

		for(i, v)
		{
			y--;
			if(--n == 1) return;
		}

		for(i, v)
		{
			x++;
			y--;
			if(--n == 1) return;
		}

		for(i, v)
		{
			x++;
			if(--n == 1) return;
		}

		for(i, v)
		{
			y++;
			if( --n== 1) return;
		}
	}
}

int main(int argc, char const *argv[])
{
	while(sc1(n) == 1)
	{
		x = y = v = 0;
		maja();
		printf("%d %d\n", x, y);
	}

	return 0;
}