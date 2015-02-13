#include <cstdio>
#include <cstring>

#define SC1(a) scanf("%d", &a)
#define SC2(a, b) scanf("%d %d", &a, &b)
#define ZERO(x) memset(x, 0, sizeof(x))
#define FOR(i, n) for(int i = 0; i < (n); ++i)
#define REP(i, a, b) for (int i = (a); i < (b); ++i)

using namespace std;

int pos[10010];

int main(int argc, char const *argv[])
{
	bool b;
	int n, c, p, v;

	while(SC1(n) && n)
	{
		b = false;
		ZERO(pos);

		FOR(i, n)
		{
			SC2(c, p);
			if((i + p < 0) || (i + p >= n) || (!v && pos[i + p])) b = true;
			if(b) continue;
			pos[i + p] = c;
		}

		if(b){
			puts("-1");
		}else{
			FOR(i, n)
			{
				printf("%d", pos[i]);
				if(i != (n - 1))
					printf(" ");
			}
			printf("\n");
		}
	}

	return 0;
}