#include <cstdio>
using namespace std;

unsigned long long len (unsigned long long value)
{
  	int l = 1;
  	while(value > 9)
  	{
  		l++;
  		value /= 10;
  	}

  	return l;
}

int main()
{
	int n, m, counter = 4, i, j, k;
	unsigned long long x, max, size, dif, sub;
	scanf("%i", &n);

	while(n--)
	{
		scanf("%i", &m);
		unsigned long long matriz[m][m], coluna[m];
		max = 0;

		for (i = 0; i < m; ++i)
		{
			for (j = 0; j < m; ++j)
			{
				scanf("%llu", &x);
				x *= x;
				matriz[i][j] = x;
			}
		}

		for (j = 0; j < m; ++j)
		{
			for (i = 0; i < m; ++i)
			{
				size = len(matriz[i][j]);
				if(max < size)
					max = size;
			}
			coluna[j] = max;
			max = 0;
		}

		printf("Quadrado da matriz #%i:\n", counter);

		for (i = 0; i < m; ++i)
		{
			for (j = 0; j < m; ++j)
			{
				sub = len(matriz[i][j]);
				dif = coluna[j] - sub;

				for (k = 0; k < dif; ++k)
					printf(" ");

				printf("%llu", matriz[i][j]);

				if(j != (m - 1))
					printf(" ");
			}
			printf("\n");
		}

		counter++;
		if(n >= 1)
			printf("\n");
	}

	return 0;
}