#include <stdio.h>
#include <string.h>

int sudoku[9][9];

bool sum(int sudoku[9][9])
{
	int i, j, k, l, c, s;

	for (i = 0; i < 9; ++i)
	{
		l = 0; c = 0;

		for (j = 0; j < 9; ++j)
		{
			l += sudoku[i][j];
			c += sudoku[j][i];
		}	

		if(l != 45 || c != 45)
			return false;
	}

	for (i = 0; i < 9; i += 3)
	{
		for (j = 0; j < 9; j += 3)
		{
			s = 0;

			for (k = i; k < (i + 3); ++k)
				for (l = j; l < (j + 3); ++l)
					s += sudoku[k][l];

			if(s != 45)
				return false;
		}
	}

	return true;
}

int main(int argc, char const *argv[])
{
	int n, x, c = 1, i, j;
	bool b, li, su;

	scanf("%d", &n);

	while(n--)
	{
		b = true;

		for (i = 0; i < 9; ++i)
			for (j = 0; j < 9; ++j)
				scanf("%d", &sudoku[i][j]);

		su = sum(sudoku);

		printf("Instancia %d\n", c); c++;
		printf((li || su) ? "SIM\n" : "NAO\n");

		printf("\n");
	}

	return 0;
}