#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cstring>

using namespace std;

int vetor[1000000];

int main(int argc, char const *argv[])
{
	int n, x, y, i, j, p, aux;
	int* low;
	int* up;
	std::vector<int>::iterator l, u;

	while(scanf("%d", &n) == 1){

		memset(vetor, 0, sizeof(vetor));
		aux = 0;

		for (i = 0; i < n; ++i)
		{
			scanf("%d %d", &x, &y);
			for (j = x; j <= y; ++j)
				vetor[aux++] = j;
		}

		sort(vetor, vetor + aux);
		scanf("%d", &p);

		if(binary_search(vetor, vetor + aux, p)){
  			low = lower_bound (vetor, vetor + aux, p);
  			up = upper_bound (vetor, vetor + aux, p);

  			printf("%d found from %ld to %ld\n", p, (low- vetor), (up - vetor) - 1);
		}else{
			printf("%d not found\n", p);
		}
	}

	return 0;
}