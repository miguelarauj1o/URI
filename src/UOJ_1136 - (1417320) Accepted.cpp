#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int bolas[1002], marcadas[1002];

int main(int argc, char const *argv[])
{
	int n, b, x, i, j;
	bool p;

	while(scanf("%d %d", &n, &b) && (n || b))
	{
		memset(marcadas, 0, sizeof marcadas);
		p = true;

		for (i = 0; i < b; ++i)
			scanf("%d", &bolas[i]);

		for (i = 0; i < b; ++i)
			for (j = 0; j < b; ++j)
				marcadas[abs(bolas[i] - bolas[j])] = 1;

		for (i = 0; i < (n + 1); ++i)
			if(marcadas[i] == 0)
				p = false;

		printf(p ? "Y\n" : "N\n");
	}

	return 0;
}