#include <cstdio>
using namespace std;

int main()
{
	int p, n, c, x, counter, res;

	while(scanf("%i %i %i", &p, &n, &c) && (p || n || c))
	{
		int matriz[n][p];
		counter = 0; res = 0;

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < p; ++j)
			{
				scanf("%i", &x);
				matriz[i][j] = x;
			}
		}

		for (int j = 0; j < p; ++j)
		{
			counter = 0;
			for (int i = 0; i < n; ++i)
			{
				if(matriz[i][j] != 0){
					counter++;
				}else{
					counter = 0;
				}
				
				if(counter == c){
					res++;
				}
			}
			
		}

		printf("%i\n", res);
	}

	return 0;
}