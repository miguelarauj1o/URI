#include <cstdio>

using namespace std;

#define sc1(a) scanf("%d", &a)
#define fr(i, a, n) for(int i = (a); i < (n); i++)

int main(int argc, char const *argv[])
{
	int n, x, max;

	while(sc1(n) == 1)
	{
		max = 0;

		fr(i, 0, n)
		{
			sc1(x);
			if(max < x)
				max = x;
		}

		if(max < 10) printf("1\n");
		else if(max >= 10 && max < 20) printf("2\n");
		else printf("3\n");
	}

	return 0;
}