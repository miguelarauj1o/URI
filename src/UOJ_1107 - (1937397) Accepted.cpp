#include <cstdio>

using namespace std;

#define sc1(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d%d", &a, &b)
#define fr(i, a, n) for(int i = (a); i < (n); i++)

int main(int argc, char const *argv[])
{
	bool b;
	int a, c, cnt, w, x, tmp;

	while (sc2(a, c) && (a || c))
	{
		cnt = 0, b = false, tmp = w = a;

		fr(i, 0, c)
		{
			sc1(x);
			if (x <= tmp) b = false;
			else{
				if (!b) cnt += w - tmp;
				w = x, b = true;
			}

			tmp = x;
		}

		if (!b)
			cnt += w - tmp;

		printf("%d\n", cnt);
	}

	return 0;
}