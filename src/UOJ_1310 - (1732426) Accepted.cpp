#include <cstdio>

using namespace std;

#define sc1(a) scanf("%d", &a)
#define for(i,a,n) for(int (i) = (a); (i) < (n); (i)++)

int a[51];

int main(void)
{
	int n, custo, x, max, tmax;

	while(sc1(n) == 1)
	{
		sc1(custo);
		max = 0, tmax = 0;

		for(i,0,n)
		{
			sc1(x);
			a[i] = x - custo;
		}
		
		for(i,0,n)
		{
			tmax += a[i];
			if(tmax < 0)
				tmax = 0;
			if(max < tmax)
				max = tmax;
		}

		printf("%d\n", max);
	}

	return 0;
}