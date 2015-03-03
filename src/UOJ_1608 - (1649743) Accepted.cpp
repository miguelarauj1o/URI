#include <cstdio>
#include <cstring>
#include <algorithm>

#define sc1(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d %d", &a, &b)
#define sc3(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define zero(x) memset(x, 0, sizeof(x))
#define for(i, n) for(int i = 0; i < (n); ++i)
 
using namespace std;
 
int main(int argc, char const *argv[])
{
	int t, d, i, b, q, in, qtd;

	sc1(t);

	while(t--)
	{
		sc3(d, i, b);
		 
		int p[i], custo[b];
		zero(custo);
		 
		for(j, i)
			sc1(p[j]);

		for(j, b)
		{
			sc1(q);

			for(k, q)
			{
				sc2(in, qtd);
				custo[j] += p[in]*qtd;
			}
		}

		sort(custo, custo + b);
		printf("%d\n", d/custo[0]);
	}
}