#include <cstdio>

#define SC1(a) scanf("%d", &a)
#define FOR(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef long long LL;

LL m[51];

int main(int argc, char const *argv[])
{
	int n, i, j;
	LL s;

	while(SC1(n) && n)
	{
		s = 0;

		FOR(i, n)
			scanf("%lld", &m[i]);

		for(i = n-2; i >= 0; --i)
			for(j = n-1; j > i; --j)
				m[i] += m[j];
   
		FOR(i, n)
			s += m[i];
 
		printf("%lld\n", s);
	}

	return 0;
}