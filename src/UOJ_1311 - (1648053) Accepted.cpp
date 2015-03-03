#include <cstdio>

#define sc2(a, b) scanf("%d %d", &a, &b)
#define for(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int left[1000100], right[1000100];

int main(int argc, char const *argv[])
{
	int s, b, l, r;

	while(sc2(s, b) && (s || b))
	{
		for(i, (s + 1))
		{
			left[i] = i - 1;
			right[i] = i + 1;
		}

		for(i, b)
		{
			sc2(l, r);
			if(left[l] < 1) printf("*");
			else printf("%d", left[l]);

			if(right[r] > s) printf(" *\n");
			else printf(" %d\n", right[r]);

			left[right[r]] = left[l];
			right[left[l]] = right[r];
		}

		printf("-\n");
	}

	return 0;
}